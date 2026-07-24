#include "sum_of_multiples.h"
#include <unordered_set>
namespace sum_of_multiples
{
    int to(const vec &multipliers,int N)
    {
        std::unordered_set<int> list;
        int result=0;
        for(int i=1;i<N;i++)
        {
            if(multipliers.x >0)
            {
              int num =  multipliers.x * i;
              if(num<N)
              {
                  list.insert(num);
              }
            }
            if(multipliers.y >0)
            {
                int num =  multipliers.y * i;
                if(num<N)
                {
                    list.insert(num);
                }
            }
            if(multipliers.z >0)
            {
                int num =  multipliers.z * i;
                if(num<N)
                {
                    list.insert(num);
                }
            }
        }
        for(auto i : list)
        {
            result = result + i;
        }
        return result;
    }
} // namespace sum_of_multiples
