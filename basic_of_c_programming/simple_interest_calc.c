// This program calculates simple interest based on user input for principal, rate, and time.
#include <stdio.h>
int main() {
    float principal, rate, time, simpleInterest;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);
    printf("Enter the time (in years): ");
    scanf("%f", &time);
    simpleInterest = (principal * rate * time) / 100;
    printf("The simple interest is: %.2f\n", simpleInterest);
    return 0;
}