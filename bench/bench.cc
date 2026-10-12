// Stems every word of a file (argv[2], one per line) ten times; reports ns per word.
//   snowball_bench LANGUAGE WORDS
#include "snowball.hh"

#include <chrono>
#include <cstdio>
#include <fstream>
#include <string>
#include <vector>

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
	auto t0 = std::chrono::steady_clock::now();
	for (int round = 0; round < 10; ++round) {
		for (const auto& w : words) { sink += stem(w).size(); }
	}
	double ns = std::chrono::duration<double, std::nano>(std::chrono::steady_clock::now() - t0).count();
	std::printf("%s: %zu words, %.1f ns each (sink %zu)\n", argv[1], words.size(), ns / double(words.size() * 10), sink);
}
