#include "binary_search.h"

const int *binary_search(int value, const int *arr, size_t length)
{   
    if (length == 0) return NULL;
    if(length < 2) return &arr[0];
    for(size_t i = 0; i < length;++i)
    {
        if(arr[i] == value) return &arr[i];
    }
    return NULL;
}
