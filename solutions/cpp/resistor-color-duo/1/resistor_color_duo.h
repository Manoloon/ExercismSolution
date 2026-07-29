#pragma once
#include <vector>
#include <string_view>
#include <map>
namespace resistor_color_duo {
enum class EColors
{
    black = 0,
    brown = 1,
    red = 2,
    orange = 3,
    yellow = 4,
    green = 5,
    blue = 6,
    violet = 7,
    grey = 8 ,
    white = 9
};
const std::map<std::string_view,EColors> ColorMap
{
    {"black", EColors::black},
    {"brown", EColors::brown},
    {"red", EColors::red},
    {"orange", EColors::orange},
    {"yellow", EColors::yellow},
    {"green", EColors::green},
    {"blue", EColors::blue},
    {"violet", EColors::violet},
    {"grey", EColors::grey},
    {"white", EColors::white}
};
int color_code(const std::string_view s);
int value(const std::vector<std::string_view>& colors);

}  // namespace resistor_color_duo
