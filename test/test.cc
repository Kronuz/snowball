// snowball: every language against "word<TAB>stem" vectors in argv[1]/<language>.tsv,
// aliases, the language list, and moves.
#include "snowball.hh"

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <stdexcept>
#include <string>

static int failures = 0;
#define CHECK(cond) \
	do { \
		if (!(cond)) { std::fprintf(stderr, "%s:%d: CHECK(%s)\n", __FILE__, __LINE__, #cond); if (++failures > 20) std::exit(1); } \
	} while (0)

int main(int argc, char** argv) {
	if (argc != 2) {
		std::fprintf(stderr, "usage: snowball_test VECTORS_DIR\n");
		return 2;
	}
	auto names = snowball::stemmer::languages();
	CHECK(names.size() == 38);
	CHECK(std::is_sorted(names.begin(), names.end()));
	CHECK(snowball::stemmer::canonical("en") == "english");
	CHECK(snowball::stemmer::canonical("kraaij_pohlmann") == "dutch");
	CHECK(snowball::stemmer::canonical("klingon").empty());
	bool threw = false;
	try {
		snowball::stemmer s("klingon");
	} catch (const std::invalid_argument&) {
		threw = true;
	}
	CHECK(threw);

	snowball::stemmer en("en");
	CHECK(en.language() == "english");
	CHECK(en("running") == "run");
	CHECK(en("") == "");
	snowball::stemmer moved(std::move(en));
	CHECK(moved("lazy") == "lazi");
	en = snowball::stemmer("german");
	CHECK(en("häuser") == "haus");

	std::size_t words = 0;
	for (auto name : names) {
		snowball::stemmer stem(name);
		std::ifstream in(std::string(argv[1]) + "/" + std::string(name) + ".tsv");
		CHECK(in.good());
		for (std::string line; std::getline(in, line);) {
			auto tab = line.find('\t');
			const std::string_view word(line.data(), tab), want(line.data() + tab + 1, line.size() - tab - 1);
			if (stem(word) != want) {
				std::fprintf(stderr, "%.*s: %s -> %.*s, want %.*s\n", int(name.size()), name.data(), std::string(word).c_str(),
				             int(stem(word).size()), stem(word).data(), int(want.size()), want.data());
				CHECK(false);
			}
			++words;
		}
	}
	std::printf("snowball: %zu languages, %zu words: %s\n", names.size(), words, failures ? "FAILED" : "ok");
	return failures ? EXIT_FAILURE : EXIT_SUCCESS;
}
