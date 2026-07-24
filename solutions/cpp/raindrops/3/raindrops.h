#if !defined(RAINDROPS_H)
#define RAINDROPS_H

#include <string>
namespace raindrops {
        std::string convert(int newNumber);
        const std::pair<int,std::string> Factors[]=
        {
                {3,"Pling"},
                {5,"Plang"},
                {7,"Plong"}
        };
}  // namespace raindrops

#endif // RAINDROPS_H