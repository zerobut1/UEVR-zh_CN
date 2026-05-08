#pragma once

#include <cstdint>
#include <string>
#include <string_view>
#include <vector>

namespace Localization {

enum class Language : int32_t {
    English = 0,
    SimplifiedChinese = 1,
    TraditionalChinese = 2,
};

const std::vector<std::string>& language_options();
Language language();
void set_language(Language language);
const char* tr(const char* text);
const char* tr(std::string_view text);

} // namespace Localization
