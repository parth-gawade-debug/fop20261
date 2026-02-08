// This program calculates the weekly pay of an employee based on the hours worked and the hourly wage.
#include <stdio.h>
#include <stdlib.h>
int main() {
    float hoursWorked, hourlywage=12.00, grosspay, netpay,overtimepay, tax;
    printf("Enter the number of hours worked: ");
    scanf("%f", &hoursWorked);
    if (hoursWorked <= 40) {
        grosspay= hoursWorked * hourlywage;
    } else {
        overtimepay = (hoursWorked -40)*(hourlywage*1.5);
        grosspay = 40*hourlywage;
        grosspay += overtimepay;
    }
    if (grosspay <= 300) {
        grosspay=grosspay*0.15;

    }
    else if (grosspay > 300 && grosspay <= 450) {
        tax = 300*0.15 ;
        tax += (grosspay - 300)*0.20;
    } else {
        tax = 300*0.15 + 150*0.20 + (grosspay - 450)*0.25;
    }
    netpay = grosspay - tax;
    printf("Gross Pay: $%.2f\n", grosspay);
    printf("Tax: $%.2f\n", tax);
    printf("Net Pay: $%.2f\n", netpay);
    return 0;
}