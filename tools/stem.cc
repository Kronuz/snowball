// Stems one word per line from stdin, writing "word<TAB>stem" lines.
//   snowball_stem LANGUAGE < words
#include "snowball.hh"

#include <iostream>
#include <string>

int main(int argc, char** argv) {
	if (argc != 2) {
		std::cerr << "usage: snowball_stem LANGUAGE < words\n";
		return 2;
	}
	snowball::stemmer stem(argv[1]);
	for (std::string word; std::getline(std::cin, word);) { std::cout << word << '\t' << stem(word) << '\n'; }
}
