#include "prime_factors.h"

namespace prime_factors {
    std::vector<int> of(int number)
    {
        if(number <=1){return {};}
        if(number == 2){return {2};}
        std::vector<int>list;

        for(int j=2;j<=number;j++)
            {
                while(number%j==0)
                {
                    list.push_back(j);
                    number/=j;
                }
            }
        return list;
    }
}  // namespace prime_factors
