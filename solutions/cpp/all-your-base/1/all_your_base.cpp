#include "all_your_base.h"
#include <iostream>
#include <cmath>

namespace all_your_base {
    std::vector<unsigned int> convert(int base, std::vector<unsigned int> inDigits, int outputBase)
    {
        std::vector<unsigned int> results;
        int count = inDigits.size();
        std::cout << "··············" << std::endl;
        std::cout << "outbase :" << outputBase << std::endl;
        std::cout << "size :" << count << std::endl;
        int sum =0;
        for(auto dig : inDigits)
        {
            std::cout << "digit :" << dig << std::endl;
            int power = std::pow(base,--count);
            std::cout << "power :" << power << std::endl;
            int proc = dig * power;
            std::cout << "process :" << proc << std::endl;
            sum +=proc;
            std::cout << "sum :" << sum << std::endl;
            if(count == 0)
            {
                results.emplace_back(sum);
            }
        }
        return results;
    }

}  // namespace all_your_base
