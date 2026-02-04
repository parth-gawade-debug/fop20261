#include <stdio.h>
int main() {
    int a[2][2],b[2][2],c[2][2],i,j,k,l,m,n;
    printf("enter elements");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(k=0;k<2;k++)
    {
        for(l=0;l<2;l++){
            scanf("%d",&b[k][l]);
        }
    }
    for(m=0;m<2;m++){
        for(n=0;n<2;n++){
            c[m][n]=a[i][j] + b[k][l];
            printf("%d",c[m][n]);
        }
    }
    printf("\n");
    
    return 0;
}