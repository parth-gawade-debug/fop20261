//create an array of size 5 using calloc and print the values of the array.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int)); // allocate memory for 5 integers
    for(int i=0; i<5;i++) {
        scanf("%d",&ptr[i]); // read values into the array
    }
    for (int i = 0; i < 5; i++) {
        printf("%d\n",ptr[i]); // print the values of the array
    }
    return 0;
    }