#include "raindrops.h"

namespace raindrops {
  std::string convert(int newNumber)
    {
        std::string result;
        if(newNumber%3==0)
        {
            result+="Pling";
        }
        if(newNumber%5==0)
        {
            result+="Plang";
        }
        if(newNumber%7==0) 
        {
            result+="Plong";
        }
        if(result.empty())
        {
            result= std::to_string(newNumber);
        }
        return result;
    }
}  // namespace raindrops
