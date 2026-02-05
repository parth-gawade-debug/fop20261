// write a menu driven program to implement basic arithematic operations.

#include <stdio.h>
#include <math.h>
int main() {
    float num1;
    float num2;
    int ch;
    float result;
    float factorial(float num1) {
        if(num1==0) {
            return 1;
        }
        else {
            return num1*factorial(num1-1);
        }
    }
    result=pow(num1,num2);
