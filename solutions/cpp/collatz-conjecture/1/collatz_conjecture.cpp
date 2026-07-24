#include "collatz_conjecture.h"
#include <stdexcept>
#include <iostream>

namespace collatz_conjecture
{
    int steps(const int number) 
    {
        if(number<=0)
        {
             throw std::domain_error("negative_value_is_an_error");
        }

        int result = number;
        int steps = 0;
        while (result != 1) {
            // its even
            if (result % 2 == 0) {
                result = result / 2;
            } else {
                result = 3 * result + 1;
            }
            steps++;
        }
        return steps;
    }
} // namespace collatz_conjecture
