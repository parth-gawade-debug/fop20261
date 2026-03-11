// initializing all elements to the same value
#include <stdio.h>
int main(){
    int array_value[10]={0,1,4,9,16};
    int i;
    for(i=5;i<10;++i) {
        array_value[i]=i*i; 
        for (i=0;i<10;++i) {
            printf("array_values[%d] = %d\n", i, array_value[i]);   

        }
    }
    return 0;
}
// all the remaining elements of the array are initialized to 0 by default.