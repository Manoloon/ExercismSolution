#if !defined(ACRONYM_H)
#define ACRONYM_H
#include <string>
#include <iostream>
#include <regex>
namespace acronym {
    std::string acronym(std::string str){
        std::string result;
        std::regex pattern("[A-Za-z][^-\\s]*");
        
    auto word_begin = std::sregex_iterator(std::begin(str), 
                      std::end(str), 
                      pattern);
        
    auto word_end = std::sregex_iterator();
        
        for(std::sregex_iterator it = word_begin;it != word_end;++it)
        {
           std::smatch match = *it;
           char first_letter = match.str()[0];
           result += std::toupper(first_letter);
        }
        return result;
    }
}  // namespace acronym
#endif // ACRONYM_H