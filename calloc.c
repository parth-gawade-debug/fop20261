// write a program to allocate the size of memory as n and let n be user input 
#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int)); // allocate memory for n integers
    for (int i = 0; i < n; i++) {
        printf("%d\n",ptr[i]); // print the allocated memory
    }
    return 0;
    }