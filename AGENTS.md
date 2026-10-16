# AGENTS.md — snowball

## Repo map

```
snowball.hh, snowball.cc   The C++ API: stemmer, languages, canonical.
generated/                 Snowball's generated C, languages.inc, stemmers.h. Never edit by hand.
runtime/                   Snowball's C runtime, copied at the pinned commit.
tools/regenerate.sh        Rebuilds generated/ and runtime/ from tools/SNOWBALL_COMMIT.
tools/stem.cc              snowball_stem: word<TAB>stem for stdin lines.
test/test.cc               Aliases, moves, and test/vectors/<language>.tsv.
fuzz/fuzz_stem.cc          libFuzzer: arbitrary bytes in every language.
bench/bench.cc             ns per word over a word list.
docs/snowball.d2     README diagram; render: d2 --layout elk --sketch --theme 302 docs/snowball.d2 docs/snowball.svg
```

## Invariants

- The pinned commit must stem exactly as Xapian does; check every language on the full
  snowball-data vocabularies before moving the pin.
- Changes go to `snowball.hh`, `snowball.cc`, tools, and tests; generated code changes
  only through `tools/regenerate.sh`.

## Verify a change

```sh
cmake -S . -B build && cmake --build build && ctest --test-dir build
```
