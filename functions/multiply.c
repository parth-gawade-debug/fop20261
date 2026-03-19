// this program uses functions to multiply two numbers.
#include <stdio.h>
// function prototype
int multiply(int a ,int b);
int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    // call the multiply function and display the result
    printf("The product of %d and %d is %d.\n", num1, num2, multiply(num1, num2));
    return 0;
}
// function definition
int multiply(int a, int b) {
    return a * b;
}
/* in this program we first used the function prototype to declare the function before main, 
then we defined the function after main. 
The multiply function takes two integers as parameters and returns their product. 
In the main function, we read two integers from the user, call the multiply function with those integers,
 and print the result. */
  