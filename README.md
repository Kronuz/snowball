# snowball

Part of [Kronuz C++ Libraries](https://github.com/Kronuz/cpp-libraries), a collection of small, reusable C++ libraries.

[![CI](https://github.com/Kronuz/snowball/actions/workflows/ci.yml/badge.svg)](https://github.com/Kronuz/snowball/actions/workflows/ci.yml)
[![License: MIT](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)
![C++20](https://img.shields.io/badge/C%2B%2B-20-blue.svg)

Snowball stemmers for C++20: all 38 languages as generated C behind one small API, stemming
exactly as Xapian 2.1.0. The C that the [Snowball](https://snowballstem.org/) compiler generates
at a pinned commit (`tools/SNOWBALL_COMMIT`) is checked in, and a C++ class picks a stemmer by
language name or alias. Reach for it for search and indexing that must stem the way Xapian does.

## ✨ Highlights

- **One class.** `snowball::stemmer(language)` takes a canonical name (`"english"`) or an alias
  (`"en"`, `"eng"`, `"kraaij_pohlmann"`); an unknown name throws `std::invalid_argument`.
- **No copies.** `stemmer(word)` stems a UTF-8 word and returns a `std::string_view` that stays
  valid until the next call.
- **Discoverable.** `stemmer::languages()` lists the 38 canonical names, sorted;
  `stemmer::canonical(name)` resolves an alias.
- **Xapian's stems.** Across the full [snowball-data](https://github.com/snowballstem/snowball-data)
  vocabularies (11,648,988 words in 38 languages) every stem equals Xapian 2.1.0's `Xapian::Stem`,
  also under ASan and UBSan.
- **Links beside libstemmer.** Every external C symbol and runtime struct carries a
  `kronuz_snowball_` prefix.
- **Fuzzed.** `fuzz/fuzz_stem.cc` stems arbitrary bytes in every language.

Languages: arabic, armenian, basque, catalan, czech, danish, dutch, dutch_porter,
earlymodernenglish, english, esperanto, estonian, finnish, french, german, greek, hindi,
hungarian, indonesian, irish, italian, lithuanian, lovins, nepali, norwegian, persian, polish,
porter, portuguese, romanian, russian, serbian, sesotho, spanish, swedish, tamil, turkish,
yiddish.

## 🚀 Quick start

```cpp
#include "snowball.hh"

#include <cstdio>
#include <string>

int main() {
	snowball::stemmer stem("english");
	std::string a(stem("running"));  // copy it: the view lasts until the next call
	std::string b(stem("connections"));
	std::printf("%s %s\n", a.c_str(), b.c_str());  // run connect
}
```

## 📦 Installation

Requires a C++20 compiler, a C compiler for the generated stemmers, and CMake 3.14 or newer; no
other dependencies. CI builds and tests it on Linux (x86_64 with GCC and Clang, arm64), macOS
(arm64, x86_64) and FreeBSD, plus ASan + UBSan and TSan builds.

```cmake
include(FetchContent)
FetchContent_Declare(snowball
  GIT_REPOSITORY https://github.com/Kronuz/snowball.git
  GIT_TAG        51582e32310f5b47d4ef6759d7b76c0169dd7ec9)  # or main to track the tip
FetchContent_MakeAvailable(snowball)

target_link_libraries(my_app PRIVATE snowball::snowball)
```

```cpp
#include "snowball.hh"
```

## 🎯 When to use it

Stemming for search in any of the 38 Snowball languages, with the same stems as Xapian.

Not for:

- Lemmatization (dictionary forms) or morphology: stems are not words.
- Sharing one stemmer across threads: a stemmer is not thread-safe, so use one per thread.

## ⚡ Performance

ns to stem one word: every word of a [snowball-data](https://github.com/snowballstem/snowball-data/tree/019921c3a41c2b70063ee3feb215a00c8e594597)
vocabulary (`voc.txt`), in file order, the best of five passes of `bench/bench.cc`. *snowball* is
this library; *libstemmer* is the C library of the Snowball project, built with `-O3` from the
commit `tools/SNOWBALL_COMMIT` pins ([3a59de9](https://github.com/snowballstem/snowball/tree/3a59de937b5d2a5865c765da769d922ad43c9846),
`v3.1.1-116`). Both run the same generated stemmers, so the table shows what the C++ class adds
over calling the C API directly. The bench checks that both return the same stem for every word.
The ratio is snowball's time over libstemmer's, so below 1 is faster. Apple clang 17, `-O3`, one
thread, on an Apple M4 Pro (macOS 26) and an Intel Core i9-9980HK (macOS 15).

| Language | Apple M4 Pro: snowball | libstemmer | ratio | Intel Core i9-9980HK: snowball | libstemmer | ratio |
| --- | ---: | ---: | ---: | ---: | ---: | ---: |
| english (42,649 words) | 114 ns | 113 ns | 1.02 | 194 ns | 195 ns | 1.00 |
| russian (49,785 words) | 132 ns | 130 ns | 1.02 | 206 ns | 206 ns | 1.00 |
| german (35,053 words) | 191 ns | 192 ns | 0.99 | 335 ns | 326 ns | 1.03 |

```sh
cmake -B build -DCMAKE_BUILD_TYPE=Release -DSNOWBALL_BENCH_LIBSTEMMER=ON
cmake --build build --target snowball_bench
./build/snowball_bench english snowball-data/english/voc.txt
```

`SNOWBALL_BENCH_LIBSTEMMER=ON` fetches the Snowball source at the pinned commit and builds
`libstemmer.a` with its own makefile (GNU make and Perl); only `snowball_bench` links it. Without
the option the bench times snowball alone. libstemmer does not ship the `lovins` stemmer, so that
language has no comparison.

## 📚 Documentation

- [AGENTS.md](AGENTS.md): repository map, invariants, and how to move the Snowball pin.
- [Catalog entry](https://github.com/Kronuz/cpp-libraries/blob/main/AGENTS.md#snowball) in Kronuz
  C++ Libraries.

## 🛠️ Building and testing

```sh
cmake -B build && cmake --build build && ctest --test-dir build
./build/snowball_stem english < words.txt
tools/regenerate.sh  # or tools/regenerate.sh COMMIT
```

CTest stems a 500-word sample of every language (19,003 words) against `test/vectors`.
`snowball_stem` prints `word<TAB>stem` for each line of its input. `tools/regenerate.sh` builds
the Snowball compiler at `tools/SNOWBALL_COMMIT` (or the commit given) and rewrites `generated/`,
`runtime/`, `tools/modules.txt` and `LICENSE-SNOWBALL`; `-DSNOWBALL_FUZZ=ON` with Clang builds the
libFuzzer target.

## 🤝 Contributing

Issues and pull requests are welcome. Read [AGENTS.md](AGENTS.md) and the catalog's
[rules of engagement](https://github.com/Kronuz/cpp-libraries/blob/main/AGENTS.md#rules-of-engagement)
first; generated code changes only through `tools/regenerate.sh`.

## 📄 License

MIT. See [LICENSE](LICENSE). The generated stemmers and runtime are Snowball's, under the BSD
3-clause license; see [LICENSE-SNOWBALL](LICENSE-SNOWBALL).
