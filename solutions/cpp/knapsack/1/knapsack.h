#pragma once
#include <vector>

namespace knapsack {

struct Item {
    int weight;
    int value;
};
    int maximum_value(int MaxWeight,const std::vector<Item>& Items);
}  // namespace knapsack
