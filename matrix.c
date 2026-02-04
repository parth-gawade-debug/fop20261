//program to print 2x2 matrix.

#include <stdio.h>
int main() {
    int a[2][2],i,j;
    printf("enter elements");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("2x2 matrix is:\n");
    printf("[");
    for (i=0;i<2;i++){
        for(j=0;j<2;j++){
            
            printf("%d",a[i][j]);
            
        }
        printf("]");
        printf("\n");
    }
    return 0;
}