//create an array of size 5 using calloc and print the values of the array.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int)); // allocate memory for 5 integers
    ptr[0] = 1; // assign values to the array
    ptr[1] = 2;
    ptr[2] = 65;
    ptr[3] = 56;
    ptr[4] = 5;
    for (int i = 0; i < 5; i++) {
        printf("%d\n",ptr[i]); // print the values of the array
    }
    return 0;
    }