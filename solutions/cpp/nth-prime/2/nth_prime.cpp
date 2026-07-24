#include "nth_prime.h"
#include <stdexcept>
namespace nth_prime {
  bool isPrime(int number){
        int counter = 0;
        for (int j = 2; j < number; j++){
            if (number % j == 0){
                counter = 1;
                break;
            }
        }
        return (counter == 0);
    }
    int nth(int number){
        if(number==0){throw std::domain_error ("input is 0");}
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
