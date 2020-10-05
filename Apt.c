#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main(int argc, char* argv[argc +1])
{
    char* end_of_conversion; 
    unsigned int arr_len = strtoul(argv[1], &end_of_conversion, 10);
     int* arr = (int*)malloc(arr_len * sizeof(int)); 
    srand(time(NULL)); 
    printf("\nInitial array: \n"); 
    for(int i = 0; i < arr_len; i++) {
        arr[i] = rand() % 199 - 99; 
        printf("\t#%3d: %4d", i, arr[i]); 
        if(i % 5 == 4) {
            printf("\n"); 
        }
    }

    for(int i = 0; i < arr_len; i++)
    {
        srand(0);
        int i;
        for (i = 0; i < arr_len; i++) 
        {
            arr[i] = rand();
        }

    }

    for(int i = 0; i < arr_len; i++) 
    {
        printf("\t#%3d: %4d", i, arr[i]); 
        if(i % 5 == 4) 
        {
            printf("\n"); 
        }
    }
    return EXIT_SUCCESS;
}
