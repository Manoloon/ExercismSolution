#include "hamming.h"
#include <string.h>

int compute(const char *lhs, const char *rhs){
    size_t lhsSize = strlen(lhs);
    size_t rhsSize = strlen(rhs);
    if(lhsSize != rhsSize)
        return -1;
    if(lhsSize < 1)
        return 0;
    
    int dist =0;
    for(;*lhs != '\0' && *rhs != '\0';lhs++, rhs++){
        if(*lhs != *rhs)
            dist++;
    }
  return dist;
}