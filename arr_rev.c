#include "iat.h"

int arr_rev(int* arr, unsigned int arr_len){
    int *begin = &arr[0];
    int *end = &arr[arr_len - 1];
    
    while (begin != end && begin < end){
        *begin ^= *end;
        *end ^= *begin;
        *begin ^= *end;

        begin++;
        end--;
    }
    return 0; 
}
