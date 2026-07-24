#include "binary.h"
#include <sstream>
#include <string>

namespace binary 
{

 bool is_digits(const std::string &str)
 {
     return str.find_first_not_of("0123456789") == std::string::npos;
 }

 int convert(const std::string & toConvert)
    {
        if(!is_digits(toConvert))
        {
            return 0;
        }
        std::stringstream intString(toConvert);
        long int integer;
        intString >> integer;
        long int decimal = 0, base = 1, remainder;
        
        while (integer>0)
        {
            remainder = integer % 10;
            decimal += remainder * base;
            base = base *2;
            integer /= 10;
        }
        return decimal;
    }

}  // namespace binary
