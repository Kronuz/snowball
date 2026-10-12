// libFuzzer target: the first byte picks a language, the rest is the word; stemming
// arbitrary bytes (invalid UTF-8 included) stays in bounds.
#include "snowball.hh"

#include <memory>
#include <vector>

extern "C" int LLVMFuzzerTestOneInput(const std::uint8_t* data, std::size_t size) {
	static std::vector<std::unique_ptr<snowball::stemmer>> stemmers = [] {
		std::vector<std::unique_ptr<snowball::stemmer>> out;
		for (auto name : snowball::stemmer::languages()) { out.push_back(std::make_unique<snowball::stemmer>(name)); }
		return out;
	}();
	if (size == 0) { return 0; }
	auto& stem = *stemmers[data[0] % stemmers.size()];
	(void)stem(std::string_view(reinterpret_cast<const char*>(data + 1), size - 1));
	return 0;
}
