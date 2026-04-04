#include <stdio.h>
#include <stdlib.h>

int main() {

  int n = 4;
  
  int* ptr;

  ptr = (int*) malloc(n * sizeof(int));

  if (ptr == NULL) {
      printf("Memory cannot be allocated");
      return 0;
  }

  printf("Allocated Memory\n");
  for (int i = 0; i < n; ++i) {
      printf("%p\n", ptr + i);
  }

  n = 6;
// so here we are trying to reallocate the memory that we just allocated with malloc() 
//and we are trying to increase the size of the memory from 4 integers to 6 integers so that means 
//we are trying to allocate 24 bytes of memory and the address of the first byte will be stored in ptr.
  ptr = realloc (ptr, n * sizeof(int));

  printf("Newly Allocated Memory\n");
  for(int i = 0; i < n; ++i) {
      printf("%p\n", ptr + i);
  }

  return 0;
}