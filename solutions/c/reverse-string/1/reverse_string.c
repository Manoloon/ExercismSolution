#include "reverse_string.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *reverse(const char *value){
    if(!value) return NULL;
    int length = strlen(value);
    char *result = (char*)malloc((length+1) * sizeof(char));
    int start = 0;
    int end = length -1;
    while(end >=0){
        result[start]=value[end];
        start++;
        end--;
    }
    result[start]='\0';
    return result;
}