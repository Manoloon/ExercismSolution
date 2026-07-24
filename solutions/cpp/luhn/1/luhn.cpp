#include "luhn.h"
#include <vector>

namespace luhn {
bool valid(const std::string& n) 
    {
        if( n.size() < 2 )
        {
            return false;
        }
        // number should always end with a number, never a letter.
        if(!std::isdigit(n.back()))
        {
            return false;
        }

        std::vector<int> numbers;
        for(auto l : n)
        {
            // if the number contains any punctuation, the number is invalid.
            if(std::ispunct(l))
            {
                return false;
            }
            if(std::isspace(l))
            {
                continue;
            }
            // only digits are valid
            if(std::isdigit(l))
            {
                numbers.emplace_back(static_cast<int>(l - 48));
            }
            else
            {
                return false;
            }
        }
        if( numbers.size() < 2 )
        {
            return false;
        }
        int size = numbers.size()-1;
        int result=0;
        bool canDoubled =false;
        for(int i = size; i >= 0;i--)
        {
            
            if(canDoubled)
            {
                int doubled = numbers[i] * 2;
                if(doubled > 9) doubled -= 9;
                result += doubled;
            }
            else
            {
                result += numbers[i];
            }
            canDoubled = !canDoubled;
        }
        return result % 10 == 0 ;
    }

}  // namespace luhn
