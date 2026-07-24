#include "nth_prime.h"
#include <stdexcept>
#include <cmath>

namespace nth_prime {
// find that using this approach the time decrease in 50% for the largest number.
bool isPrime(int number){
            const int Higher = std::sqrt(number+1);
            for(int i=2;i<=Higher;++i)
            {
                if(number%i==0){return false;}
            }
        return true;
        }
// and using this approach cost 1 ms less , but it use more variables.
int nth(int number){
        if(number<1){throw std::domain_error ("input is 0");}
        int BestNumber = 0;
        int num = 2;
        int count = 1;
        //count 6th prime.
        while (count<=number){
            if (isPrime(num)){
                BestNumber = num;
                count++;
            }
                num++;
        }
        return BestNumber;
    }
}  // namespace nth_prime
