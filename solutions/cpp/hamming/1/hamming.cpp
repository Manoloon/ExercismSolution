#include "hamming.h"
#include <stdexcept>
namespace hamming
{
    int compute(const std::string &FirstChain,const std::string &SecondChain)
    {
        size_t FirstChainSize = FirstChain.size();
        if(FirstChain.empty() || FirstChainSize != SecondChain.size())
        {
            throw std::domain_error("Chains should be equal or not Empty");
        }
        int distance =0;
        for(size_t i=0;i<FirstChainSize;i++)
        {
            if (FirstChain[i] != SecondChain[i])
            {
                distance++;
            }
        }
        return distance;
    }
}  // namespace hamming
