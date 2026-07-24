#include "hamming.h"
#include <string.h>

int compute(const char *lhs, const char *rhs){
    if(strlen(lhs) < 1 && strlen(rhs) < 1){
        return 0;
    }
    if(strlen(lhs) < 1 || strlen(lhs) != strlen(rhs)){
        return -1;
    }
    int dist =0;
    for(long unsigned int i = 0;i< strlen(lhs);i++){
        if(lhs[i] != rhs[i]){
            dist++;
        }
    }
  return dist;
}