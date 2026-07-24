#include "secret_handshake.h"
#include <stdexcept>
#include <algorithm>

namespace secret_handshake {
std::vector<std::string> commands(int number)
    {
        if(number == 0) return {};
       std::bitset<5> binary = toBinary(number);
        std::vector<std::string> actions;
        if (binary[0]) actions.push_back("wink");
        if (binary[1]) actions.push_back("double blink");
        if (binary[2]) actions.push_back("close your eyes");
        if (binary[3]) actions.push_back("jump");
    
        if (binary[4]) std::reverse(actions.begin(),                     actions.end());
        return actions;
    }
std::bitset<5> toBinary(int n)
    {
   if(n < 1 || n > 31)
        {
        throw std::domain_error("number should be between 1 and 31");
        }
   return std::bitset<5>(n);
        }
}  // namespace secret_handshake
