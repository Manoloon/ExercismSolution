#include "knapsack.h"
#include <array>
namespace knapsack {
  /* 
	Knapsack(W, items)
	n <- items.size()
	vector<int> values <- (W + 1,0)
	for i from 0 to n-1:
		for w from W to Item[i].w :
			values(w) = max(values(w),values(w-items(i).w + items(i).v))
	return values(W)
  */
int maximum_value(int MaxWeight, const std::vector<Item> &Items)
{
    if(MaxWeight == 0) return 0;
    if(Items.empty()) return 0;
    size_t n = Items.size();
    std::vector<int> values(MaxWeight + 1,0);
    for(size_t i = 0; i < n;++i)
    {
        for(int w = MaxWeight; w >= Items.at(i).weight ;w--)
        {
            values.at(w) = std::max(values.at(w),values.at(w - Items.at(i).weight) + Items.at(i).value);
        }
    }
    return values.at(MaxWeight);
}

} // namespace knapsack
