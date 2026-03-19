// In this program we will define 3 functions: gcd, scd, and square_func.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float gcd(float a ,float b) {
    a=abs(a); // abs is used to get the absolute value of a and b (i.e positive value)
    b=abs(b);
    while (b!=0) {
        float temp=b;
        b=fmod(a,b); // fmod is used to get the remainder of a divided by b in floating point numbers.
        a=temp;
    }
    return a;
}
float scd(float a, float b) {
    a=abs(a);
    b=abs(b);
    return (a*b)/gcd(a,b);
}
float square_func(float a) {
    a=abs(a);
    return a*a;
}
int main(void) {
    square_func(5);
    gcd(15, 5);
    scd(15, 5);
    return 0;
}