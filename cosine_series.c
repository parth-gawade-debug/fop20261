// implementing the cosine series
#include <stdio.h>
#include <math.h>
long fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fact(n - 1);
}
int main() {
    int n ,i;
    float sum=0,x;
    printf("enter value of x:");
    scanf("%f",&x);
    printf("enter number of terms:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        sum += pow(-1,i)*pow(x,2*i)/fact(2*i);
        
}