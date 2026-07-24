#include <string>

#if !defined(REVERSE_STRING_H)
#define REVERSE_STRING_H
namespace reverse_string {
    std::string reverse_string(std::string newString){
        if(newString.empty()) return "";
        int size = newString.length()/2;
        for(int i =0; i < size; i++)
            std::swap(newString[i],newString[newString.length()-i-1]);
        return newString;
    }
}  // namespace reverse_string

#endif // REVERSE_STRING_H