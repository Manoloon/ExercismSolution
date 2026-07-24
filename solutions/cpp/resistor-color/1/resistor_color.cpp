#include "resistor_color.h"

namespace resistor_color {

    std::optional<int> color_code(const std::string& s)
    {
        const auto& it = ColorMap.find(s);
        if (it != std::end(ColorMap))
        {
            return static_cast<int>(it->second);
        }
        return std::nullopt;
    }
    std::vector<std::string> colors()
    {
        return Colors;
    }
}  // namespace resistor_color
