// Copyright (c) 2026 Germán Méndez Bravo (Kronuz). MIT License, see LICENSE.
#include "snowball.hh"

#include "generated/stemmers.h"

#include <array>
#include <limits>
#include <new>
#include <stdexcept>
#include <string>
#include <utility>

namespace snowball {

struct detail::module {
	std::string_view name;
	std::string_view aliases;  // comma-separated, including the name
	kronuz_snowball_SN_env* (*create)();
	void (*close)(kronuz_snowball_SN_env*);
	int (*stem)(kronuz_snowball_SN_env*);
};

namespace {

using detail::module;

constexpr module modules[] = {
#define SNOWBALL_LANGUAGE(name, aliases) {#name, aliases, kronuz_snowball_##name##_create_env, kronuz_snowball_##name##_close_env, kronuz_snowball_##name##_stem},
#include "generated/languages.inc"
#undef SNOWBALL_LANGUAGE
};

constexpr auto names = [] {
	std::array<std::string_view, std::size(modules)> out{};
	for (std::size_t i = 0; i < out.size(); ++i) { out[i] = modules[i].name; }
	return out;
}();

const module* find(std::string_view language) noexcept {
	for (const auto& m : modules) {
		for (std::size_t i = 0; i < m.aliases.size();) {
			std::size_t j = m.aliases.find(',', i);
			if (j == std::string_view::npos) { j = m.aliases.size(); }
			if (m.aliases.substr(i, j - i) == language) { return &m; }
			i = j + 1;
		}
	}
	return nullptr;
}

}  // namespace

stemmer::stemmer(std::string_view language) : module_(find(language)), env_(nullptr) {
	if (!module_) { throw std::invalid_argument("snowball: unknown language " + std::string(language)); }
	env_ = module_->create();
	if (!env_) { throw std::bad_alloc(); }
}

stemmer::stemmer(stemmer&& other) noexcept : module_(other.module_), env_(std::exchange(other.env_, nullptr)) {}

stemmer& stemmer::operator=(stemmer&& other) noexcept {
	if (this != &other) {
		if (env_) { module_->close(env_); }
		module_ = other.module_;
		env_ = std::exchange(other.env_, nullptr);
	}
	return *this;
}

stemmer::~stemmer() {
	if (env_) { module_->close(env_); }
}

std::string_view stemmer::operator()(std::string_view word) {
	if (word.size() > std::size_t(std::numeric_limits<int>::max()) || kronuz_snowball_SN_set_current(env_, int(word.size()), reinterpret_cast<const symbol*>(word.data())) != 0 ||
	    module_->stem(env_) < 0) {
		env_->l = 0;
		throw std::bad_alloc();
	}
	return {reinterpret_cast<const char*>(env_->p), std::size_t(env_->l)};
}

std::string_view stemmer::language() const noexcept { return module_->name; }

std::span<const std::string_view> stemmer::languages() noexcept { return names; }

std::string_view stemmer::canonical(std::string_view language) noexcept {
	const module* m = find(language);
	return m ? m->name : std::string_view{};
}

}  // namespace snowball
