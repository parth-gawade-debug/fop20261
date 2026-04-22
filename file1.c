// this program read the 5 integers from a different file and print those integers in the main function
#include <stdio.h>
int main() {
    FILE *fptr; // declare a file pointer
    fptr=fopen("test.txt","r"); // open the file in read mode
    int n;
    fscanf(fptr,"%d",&n); // read the number of integers to be read
    printf("number is :%d\n",n);
    fscanf(fptr,"%d",&n); // read the integers from the file
    printf("number is :%d\n",n);
    fscanf(fptr,"%d",&n); // read the integers from the file
    printf("number is :%d\n",n);
    fscanf(fptr,"%d",&n); // read the integers from the file
    printf("number is :%d\n",n);
    fclose(fptr); // close the file
    return 0;
}