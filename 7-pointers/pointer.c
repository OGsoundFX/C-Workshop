#include <stdio.h>

int main() {
  char *str = "Hello World";

  while(*str != '\0')
  {
    printf("%c", *str);
    str++;
  }
  return 0;
}