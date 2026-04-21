// print value of i usng pointer to pointer 
# include <stdio.h>
int main() {
    int i =12;
    int *ptr=&i; // pointer to i
    int **ptr2=&ptr; // pointer to pointer to i
    printf("value of i is %d",**ptr2); // dereferencing pointer to pointer to get value of i
    return 0;

}