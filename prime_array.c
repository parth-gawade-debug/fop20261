// creating array and finding and storing all the prime numbers from 1-100
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main() {
    int prime_numbers[50];
    int i, j, count;
    int primeindex = 0;

    bool is_prime;
    prime_numbers[0]=2; // 2 is the first prime number
    prime_numbers[1]=3; // 3 is the second prime number
    for (i=2; i<=100; ++i) {
        is_prime = true;
        for(j=0;is_prime && j<primeindex;++j) {
            if (i%prime_numbers[j]==0) {
                is_prime = false;
            }
        }
        if (is_prime) {
            prime_numbers[primeindex++]=i;
        }
    }
    for (i=0; i<primeindex; ++i) {  
        printf("prime_numbers[%d] = %d\n", i, prime_numbers[i]);
    }
    return 0;
}

    