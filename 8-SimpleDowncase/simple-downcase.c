#include <stdio.h>

char *downcase(char *str) {
  int i = 0;
  while (str[i] != '\0')
  {
    str[i] = str[i] + 32;
    i++;
  }
  str[i] = str[i];
  return str;
}

int main() {
  char str[] = "HELLO";
  printf("%s\n", downcase(str));
  return 0;
}