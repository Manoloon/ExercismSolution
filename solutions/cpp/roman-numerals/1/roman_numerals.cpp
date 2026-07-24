#include "roman_numerals.h"
#include <vector>
namespace roman_numerals {
    std::string convert(int n)
{
    std::vector<std::string> Unit{"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    std::vector<std::string> Tens{"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    std::vector<std::string> Hundred{"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    std::vector<std::string> Thousand{"","M","MM","MMM"};
    return Thousand[n/1000] + Hundred[(n%1000)/100] + Tens[(n%100)/10] + Unit[n%10];
}
}  // namespace roman_numerals
