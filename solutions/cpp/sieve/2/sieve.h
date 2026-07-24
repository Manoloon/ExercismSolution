#if !defined(SIEVE_H)
#define SIEVE_H
#include <vector>

namespace sieve {
    std::vector<int> primes(int n)
{
    if(n<2)return {};
    std::vector<int> results;
// vector of bools from 0 to n, all considered prime nums (true)
    std::vector<bool> primeNums(n+1,true);
// from 2 (first real prime), then mark all multiples of p as no prime (false) 
    for(int p=2;p*p <=n;p++)
    {
        if(primeNums[p] == true)
        {
           for(int i = p*p; i <=n; i +=p)
           {
               primeNums[i]=false;
           }
        }
     }
// then we gather all numbers that are  primes (true) and add them to the result vector.
        for(int i = 2; i <= n; i++){
            if(primeNums[i]){
                results.emplace_back(i);
            }
        }
        return results;
    }    
}  // namespace sieve

#endif // SIEVE_H