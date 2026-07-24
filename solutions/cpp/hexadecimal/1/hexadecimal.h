#if !defined(HEXADECIMAL_H)
#define HEXADECIMAL_H
#include <string_view>

namespace hexadecimal
{
    unsigned int convert(const std::string_view & toConvert);
    bool is_valid(const std::string_view &str);
}

#endif // HEXADECIMAL_H