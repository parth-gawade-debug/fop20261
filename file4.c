// replace the 2 number from a text file to their sum.
#include <stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("test.txt","r"); // open the file in read mode
    int a,b;
    fscanf(fptr,"%d",&a); // read the first number from the file
    fscanf(fptr,"%d",&b); // read the second number from the file

    fclose(fptr); // close the file
    fptr = fopen("test.txt","w"); // open the file in write mode
    fprintf(fptr,"%d",a+b); // write the sum of the two numbers to the file
    fclose(fptr); // close the file
    return 0;
}