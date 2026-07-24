#include "difference_of_squares.h"
#include <numeric>
#include <cassert>
#include <vector>

namespace difference_of_squares
{
    int square_of_sum(const int num)
    {
        assert(num >=0);
        std::vector <int> numVec;
        for(int i=0;i<=num;i++)
        {
            numVec.push_back(i);
        }
        const int result = std::accumulate(numVec.begin(),numVec.end(),0);
        return result*result;
    }

    int sum_of_squares(const int num)
    {
        assert(num >=0);
        std::vector <int> numVec;
        for(int i=0;i<=num;i++)
        {
            numVec.push_back(i);
        }
        return std::inner_product( numVec.begin(), numVec.end(), numVec.begin(), 0 );
    }

    int difference(const int num)
    {
        assert(num >=0);
        const int sqSum = square_of_sum(num);
        const int sumSqr = sum_of_squares(num);
        return sqSum - sumSqr;
    }
}