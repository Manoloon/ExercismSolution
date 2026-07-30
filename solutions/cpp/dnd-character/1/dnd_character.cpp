#include "dnd_character.h"
#include <cmath>

namespace dnd_character {
int modifier(int score) 
{ 
    int mod = score - 10;
    if(score <= 10)
    {
        return std::floor((mod - 1)/2);
    }
    return std::floor(mod/2);
}

int ability() 
{ 
    return 10 + modifier(3); 
}


}  // namespace dnd_character
