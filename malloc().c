#include <stdio.h>
#include <stdlib.h>

int main() {

  int n = 4;
  
  int* ptr;

  ptr = (int*) malloc(n * sizeof(int));/* allcating memory for n integers each of size int(4bytes) so that
  means 16bytes of memory will be allocated and the address of the first byte will be stored in ptr */

  if (ptr == NULL) { /* this is  a terminating condition( if memory in RAM is full then ptr will be
    automatically NULL and the program will be terminated)we would safely print a msg and exit */

      printf("Memory cannot be allocated");
      return 0;
  }

  printf("Enter input values:\n");/*This loop's only job is to collect 4 numbers
   from the user and store them in memory. It doesn't print anything — it just saves the values.*/
  for(int i = 0; i < n; ++i) {
      scanf("%d", ptr + i);
  }

  printf("Input Values\n");
  //This loop's only job is to go back and display all 4 stored values.
  for(int i = 0; i < n; ++i) {
      printf("%d\n", *(ptr + i));
  }

  free(ptr);// this is for delocating the memory that we just allocated with malloc()



  return 0;
}