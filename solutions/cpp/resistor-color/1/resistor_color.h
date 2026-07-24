#pragma once
#include <string>
#include <optional>
#include <map>
#include <vector>
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
const std::vector<std::string> Colors
{
    "black","brown","red","orange","yellow","green","blue",
    "violet","grey","white"
};
const std::map<std::string,EColors> ColorMap
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
namespace resistor_color {
 std::optional<int> color_code(const std::string& s);
 std::vector<std::string> colors();  
}  // namespace resistor_color
