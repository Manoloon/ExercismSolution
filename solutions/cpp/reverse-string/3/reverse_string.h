#include <string>
#include <string_view>

#if !defined(REVERSE_STRING_H)
#define REVERSE_STRING_H

namespace reverse_string 
{
    std::string reverse_string(std::string newString)
{
       if(newString.empty())
       {
           return "";
       }
     std::string::size_type n= newString.size();
     for (std::string::size_type i = 0; i < n / 2; i++)
     {
        std::swap(newString[i], newString[n - i - 1]);
     }
   return newString;
   }
}  // namespace reverse_string

#endif // REVERSE_STRING_H