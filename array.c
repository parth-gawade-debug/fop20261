#include <stdio.h>
int main(){
    int a[10],i;
    printf("enter array elements");
    for(i=0;i<=9;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
    return 0;
}