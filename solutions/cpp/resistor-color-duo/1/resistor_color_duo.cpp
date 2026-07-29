#include "resistor_color_duo.h"

namespace resistor_color_duo {
int color_code(const std::string_view s)
{
    auto it = ColorMap.find(s);
    if(it != ColorMap.end())
    {
        return static_cast<int>(it->second);
    }
    return -1;
}

int value(const std::vector<std::string_view> &colors)
{
    int val;
    bool firstpass = true;
    for(auto c : colors)
    {
        auto colorVal = color_code(c);
        if(firstpass)
        {
            val = colorVal * 10;
            firstpass = false;
        }
        else
        {
            val += colorVal;
            break;
        }
    }
    return val;
}

} // namespace resistor_color_duo
