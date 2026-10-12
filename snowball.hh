/*
 * Copyright (c) 2026 Germán Méndez Bravo (Kronuz)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

// Snowball stemmers (generated C, see tools/SNOWBALL_COMMIT) behind a small C++ API.

#pragma once

#include <span>
#include <string_view>

struct kronuz_snowball_SN_env;

namespace snowball {

namespace detail {
struct module;
}

class stemmer {
public:
	// language: a canonical name ("english") or an alias ("en", "eng"); throws
	// std::invalid_argument when unknown.
	explicit stemmer(std::string_view language);
	stemmer(stemmer&& other) noexcept;
	stemmer& operator=(stemmer&& other) noexcept;
	stemmer(const stemmer&) = delete;
	stemmer& operator=(const stemmer&) = delete;
	~stemmer();

	// A moved-from stemmer may only be assigned to or destroyed.

	// Stems a UTF-8 word. The result stays valid until the next call; throws std::bad_alloc.
	std::string_view operator()(std::string_view word);

	// The canonical name.
	std::string_view language() const noexcept;

	// Canonical names, sorted.
	static std::span<const std::string_view> languages() noexcept;

	// The canonical name for a name or alias, or empty when unknown.
	static std::string_view canonical(std::string_view language) noexcept;

private:
	const detail::module* module_;
	kronuz_snowball_SN_env* env_;
};

}  // namespace snowball
