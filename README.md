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

`bench/bench.cc` stems every word of a snowball-data vocabulary ten times and reports the mean,
on an Intel Core i9-9980HK with Apple clang, `-O3`:

| Language | ns per word |
| --- | ---: |
| english | 220 |
| russian | 233 |
| german | 355 |

```sh
cmake -B build -DCMAKE_BUILD_TYPE=Release && cmake --build build
./build/snowball_bench english snowball-data/english/voc.txt
```

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
