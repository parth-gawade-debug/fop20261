// This program checks the size of the bytes for different data types.
#include <stdio.h>  
#include <stdlib.h>
int main() {
    printf("variables of type char occupy %lu bytes\n",sizeof(char));
    printf("variables of type int occupy %lu bytes\n",sizeof(int));
    printf("variables of type float occupy %lu bytes\n",sizeof(float));
    printf("variables of type double occupy %lu bytes\n",sizeof(double));
    printf("variables of type long int occupy %lu bytes\n",sizeof(long int));
    printf("variables of type long long int occupy %lu bytes\n",sizeof(long long int));
    printf("variables of type long double occupy %lu bytes\n",sizeof(long double));
    printf("variables of type short int occupy %lu bytes\n",sizeof(short int));
    return 0;
}