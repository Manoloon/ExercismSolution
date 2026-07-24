#pragma once
#include <bitset>
#include <string>

namespace chicken_coop {
int positions_to_quantity(int n) {
        if (n == 0)return 0;
        int count = 0;
        while (n > 0) {
            if (n % 2 == 1) count++;
            n = n / 2;
        }
        return count;
    }
    
}  // namespace chicken_coop
