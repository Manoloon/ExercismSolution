#include "grains.h"

namespace grains {
   unsigned long long square(int GetSquare)
    {
        unsigned long long count=1;
        for(int i=1;i<GetSquare;i++)
        {
           count = count +count;
        }
        return 0ULL +count;
    }

    unsigned long long total()
    {
        return 0ULL-1;
    }
}  // namespace grains
