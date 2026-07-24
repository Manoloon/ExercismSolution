#include <stdexcept>
#include "perfect_numbers.h"

namespace perfect_numbers {
    classification classify(int number)
    {
        if(number < 1)
        {
            throw std::domain_error("Number is less than 1");
        }
        int result=0;
        for (int i = 1; i <= number / 2; ++i) {
            if (number % i == 0) {
                result += i;
            }
        }
        if (result == number)
        {
            return classification::perfect;
        }
        else if(result > number)
        {
            return classification::abundant;
        }
        else if(result < number)
        {
            return classification::deficient;
        }
        throw std::domain_error("No solution for this one");
    }
}  // namespace perfect_numbers