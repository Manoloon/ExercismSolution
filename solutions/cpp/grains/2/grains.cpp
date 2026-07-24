#include "grains.h"

namespace grains {
   unsigned long long square(int squareIndex)
    {
        unsigned long long count=1;
        for(int i=1;i<squareIndex;i++)
        {
           count*=2;
        }
        return 0ULL +count;
    }

    unsigned long long total()
    {
        return 0ULL-1;
    }
}  // namespace grains
