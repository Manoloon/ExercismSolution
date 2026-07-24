#include "collatz_conjecture.h"
#include <stdexcept>

namespace collatz_conjecture
{
    int steps(int number) 
    {
        if(number<=0)
        {
             throw std::domain_error("negative_or_Zero_value_is_an_error");
        }
        int steps = 0;
        while (number != 1) 
        {
            // its even
            if (number % 2 == 0) 
            {
                number = number / 2;
            } 
            else 
            {
                number = 3 * number + 1;
            }
            steps++;
        }
        return steps;
    }
} // namespace collatz_conjecture
