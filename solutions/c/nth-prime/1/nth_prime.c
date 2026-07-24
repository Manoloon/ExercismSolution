#include "nth_prime.h"
#include <math.h>
uint8_t isPrime(uint32_t n){
    const int higher = sqrt(n+1);
    for(int i =2;i<=higher;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
uint32_t nth(uint32_t n){
    if(n==0) return 0;
    uint32_t bestNum=0;
    uint32_t count =1;
    uint32_t num = 2;
    while (count<=n){
            if (isPrime(num)){
                bestNum = num;
                count++;
            }
                num++;
        }
return bestNum;
}