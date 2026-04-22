// this will print the odd numbers from 1 to n.
#include <stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("odd.txt","w"); // open the file in write mode
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n); // read the value of n from the user
    for(int i=1;i<=n;i++) { 
        if(i%2!=0) { // check if the number is odd
            fprintf(fptr,"%d\n",i); // write the odd number to the file
        }
    }
    fclose(fptr); // close the file
    return 0;
}