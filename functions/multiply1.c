// this program uses a function to multiply two numbers.
#include <stdio.h>
int multiply_2_numners(int a, int b) {
    int result=a*b;
    return result;
}
int main(void) {
    int result=0;
    result=multiply_2_numners(5, 10);
    printf("The product of 5 and 10 is %d.\n", result);
    return 0;
}
/* in this program we defined the function multiply_2_numbers before main. 
The function takes two integers as parameters, multiplies them, and returns the result.*/
