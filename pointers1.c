//this program demonstrates the use of pointers in C.
#include <stdio.h>
int main() {
     double salary;
    printf("Enter your salary: ");
    scanf("%lf", &salary);
    double* ptr = &salary; // pointer to the salary variable
    printf("Your salary is: %.2f\n", *ptr); // dereferencing the pointer to get the value of salary
    salary*=2; // updating the salary variable
    printf("Your updated salary is: %.2f\n", *ptr);
    return 0;
}