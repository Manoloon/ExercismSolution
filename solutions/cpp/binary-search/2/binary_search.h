#if !defined(BINARY_SEARCH_H)
#define BINARY_SEARCH_H
#include <cstddef>
#include <vector>
namespace binary_search
{
    //return the position if the item was found
    std::size_t find(const std::vector<int> & data,int item);
}  // namespace binary_search

#endif // BINARY_SEARCH_H