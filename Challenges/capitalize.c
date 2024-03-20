#include <stdio.h>

char *capitalize(char *str) {
  int i = 1;
  if (str[0] != '\0')
    str[0] = str[0] - 32;

  while (str[i] != '\0')
  {
    if (str[i - 1] == ' ')
      str[i] = str[i] - 32;
    else
      str[i] = str[i];
    i++;
  }
  str[i] = str[i];
  return str;
}

int main() {
  char str[] = "hello world";
  printf("%s\n", capitalize(str));
  return 0;
}
