#include <stdio.h>
#include <stdlib.h>

int main() {
  char str[100];
  // char *str = (char *)malloc(sizeof(char) * 100);
  printf("What is your name?\n");
  scanf("%s", str);
  printf("Hello %s\n", str);
  return 0;
}