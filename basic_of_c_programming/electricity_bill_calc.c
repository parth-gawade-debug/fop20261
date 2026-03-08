// This program calculates the electricity bill based on the units input by the user and slab rates.
#include <stdio.h>
int main() {
    int units;
    float billAmount;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if (units <= 100) {
        billAmount = units * 0.5; // Rate for first 100 units
    } else if (units <= 200) {
        billAmount = (100 * 0.5) + ((units - 100) * 0.75); // Rate for next 100 units
    } else if (units <= 300) {
        billAmount = (100 * 0.5) + (100 * 0.75) + ((units - 200) * 1.20); // Rate for next 100 units
    } else {
        billAmount = (100 * 0.5) + (100 * 0.75) + (100 * 1.20) + ((units - 300) * 1.50); // Rate for above 300 units
    }
    printf("The electricity bill amount is: %.2f\n", billAmount);
    return 0;
}   