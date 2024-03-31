#include <stdio.h>

int main() {
  char name[100];
  printf("Tell us your name\n");
  scanf("%s", name);
  printf("Hello %s\n", name);
  return 0;
}