#if !defined(BINARY_H)
#define BINARY_H
#include <string>

namespace binary 
{
    int convert(const std::string & toConvert);
    bool is_digits(const std::string &str);
}  // namespace binary

#endif // BINARY_H