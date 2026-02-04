#include <stdio.h>
int main(){
    int a[3],i,b[3],c[3];
    printf("enter array elements");
    for(i=0;i<=2;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=2;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<=2;i++){
        c[i]=a[i]+b[i];
        printf("c[%d]=%d\n",i,c[i]);
    }
    return 0;
}