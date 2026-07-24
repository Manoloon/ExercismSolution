#include "roman_numerals.h"
#include <array>
#include <stdexcept>
namespace roman_numerals {
      std::string convert(int n)
    {
        if (n < 1 || n > 3999) throw std::invalid_argument("Number out of limits");
        const std::array<std::string,10> Unit{"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        const std::array<std::string,10> Tens{"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        const std::array<std::string,10> Hundred{"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        const std::array<std::string,4> Thousand{"","M","MM","MMM"};
        return Thousand[n/1000] + Hundred[(n%1000)/100] + Tens[(n%100)/10] + Unit[n%10];
    }
}  // namespace roman_numerals
