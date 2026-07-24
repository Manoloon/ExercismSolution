#include "parallel_letter_frequency.h"
#include <iostream>
#include <algorithm>
#include <execution>

namespace parallel_letter_frequency {
    std::unordered_map<char,int> frequency(std::vector<std::string_view> input)
    {
        if(input.empty())
        {
            return{};
        }
        // this would be guarded.
        std::unordered_map<char,int> freqs;
        std::for_each(std::execution::par,std::cbegin(input),std::cend(input),[&freqs](const auto& string){
            for(char c : string){
                if(!std::isalpha(c)){ continue; }
                
                auto it = freqs.find(std::tolower(c));
                if(it == std::end(freqs)){
                    // not found 
                    freqs.insert({std::tolower(c),1});
                }
                else {
                  it->second++;  
                }
            }
        });
        return freqs;
    }
}
