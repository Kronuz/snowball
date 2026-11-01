// Stems every word of a file (argv[2], one per line; a tab ends the word) and reports ns per
// word, the best of five passes. When built with SNOWBALL_BENCH_LIBSTEMMER (the CMake option
// of the same name), upstream libstemmer, built from the Snowball commit this library
// pins, stems the same words in the same order, and the two stems of every word must be equal.
//   snowball_bench LANGUAGE WORDS
#include "snowball.hh"

#include <chrono>
#include <cstdio>
#include <fstream>
#include <string>
#include <vector>

#ifdef SNOWBALL_BENCH_LIBSTEMMER
#include <libstemmer.h>
#endif

namespace {

constexpr int passes = 5;

template <class Fn>
double best_ns_per_word(std::size_t words, Fn&& pass) {
	double best = 1e30;
	for (int i = 0; i < passes; ++i) {
		auto t0 = std::chrono::steady_clock::now();
		pass();
		double ns = std::chrono::duration<double, std::nano>(std::chrono::steady_clock::now() - t0).count();
		if (ns < best) best = ns;
	}
	return best / double(words);
}

}  // namespace

int main(int argc, char** argv) {
	if (argc != 3) {
		std::fprintf(stderr, "usage: snowball_bench LANGUAGE WORDS\n");
		return 2;
	}
	snowball::stemmer stem(argv[1]);
	std::vector<std::string> words;
	std::ifstream in(argv[2]);
	for (std::string line; std::getline(in, line);) { words.push_back(line.substr(0, line.find('\t'))); }

	std::size_t sink = 0;
	double ours = best_ns_per_word(words.size(), [&] {
		for (const auto& w : words) { sink += stem(w).size(); }
	});
	std::printf("%s: %zu words, snowball %.1f ns per word\n", argv[1], words.size(), ours);

#ifdef SNOWBALL_BENCH_LIBSTEMMER
	sb_stemmer* ref = sb_stemmer_new(argv[1], "UTF_8");
	if (ref == nullptr) {
		std::fprintf(stderr, "libstemmer has no stemmer %s\n", argv[1]);
		return 2;
	}
	std::size_t different = 0;
	for (const auto& w : words) {
		const sb_symbol* r = sb_stemmer_stem(ref, reinterpret_cast<const sb_symbol*>(w.data()), int(w.size()));
		std::string_view got(reinterpret_cast<const char*>(r), std::size_t(sb_stemmer_length(ref)));
		if (got != stem(w) && ++different <= 5) { std::fprintf(stderr, "differs on %s\n", w.c_str()); }
	}
	double theirs = best_ns_per_word(words.size(), [&] {
		for (const auto& w : words) {
			sb_stemmer_stem(ref, reinterpret_cast<const sb_symbol*>(w.data()), int(w.size()));
			sink += std::size_t(sb_stemmer_length(ref));
		}
	});
	sb_stemmer_delete(ref);
	std::printf("%s: libstemmer %.1f ns per word, snowball %.2fx its time, %zu stems differ\n", argv[1], theirs,
	            ours / theirs, different);
	if (different != 0) return 1;
#endif
	std::printf("(sink %zu)\n", sink);
}
