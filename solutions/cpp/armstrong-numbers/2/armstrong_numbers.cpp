#include "armstrong_numbers.h"
#include <numeric>
#include <vector>

namespace armstrong_numbers
{
    bool is_armstrong_number(const int newNumber)
    {
        if(newNumber <10)
        {
            return true;
        }
        int number = newNumber;
        std::vector<int>Digits;
        int count =0;
        while (number > 0)
        {
            int digit = number%10;
            number /= 10;
            Digits.push_back(digit);
            count++;
        }
        for(auto &&i : Digits)
        {
           int currentCount = count;
           int PowerNumber = i;
           for(int c=1;c<currentCount;c++)
           {
                PowerNumber = PowerNumber * i;
           }
           i = PowerNumber;
        }
        int sum = std::accumulate(Digits.begin(),Digits.end(),0);
        return (newNumber == sum);
    }
}// namespace armstrong_numbers
