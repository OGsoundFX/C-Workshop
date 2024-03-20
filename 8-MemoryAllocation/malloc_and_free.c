#include <stdio.h>
#include <stdlib.h>

int main() {
  // Assigning some memory to a pointer
  int *ptr = malloc(sizeof(int));

  // Storing a number in that specific memory slot
  *ptr = 10;

  // printing 
  printf("Number: %d\n", *ptr);

  // freeing
  free(ptr);

  // destroying pointer
  ptr = NULL;

  // testing if the memory is free
  printf("Number: %d\n", *ptr);

  return 0;
}
