//first allocate memory for 5 numbers then reallocate memory for 8 numbers.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr;
    ptr=(int *)malloc(5*sizeof(int)); // allocate memory for 5 integers
    for (int i = 0; i < 5; i++) {
    }
    ptr=(int *)realloc(ptr,8*sizeof(int)); // reallocate memory for 8 integers
    for (int i = 0; i < 8; i++) {
        printf("%d\n",ptr[i]); // print the reallocated memory
    }
    return 0;
    }