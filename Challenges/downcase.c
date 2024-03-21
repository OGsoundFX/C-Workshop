#include <stdio.h>

char *downcase(char *str) {
  int i = 0;

  while (str[i] != '\0') {
    if (str[i] >= 'A' && str[i] <= 'Z')
      str[i] = str[i] + 32;
    else
      str[i] = str[i];
    i++;
  }
  str[i] = str[i];
  return str;
}

char *upcase(char *str) {
  int i = 0;

  while (str[i] != '\0') {
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] = str[i] - 32;
    else
      str[i] = str[i];
    i++;
  }
  str[i] = str[i];
  return str;
}

int main() {
  char str[] = "HeLLo WoRLD";
  printf("Downcased string: %s\n", downcase(str));
  printf("Upcased string: %s\n", upcase(str));
  return 0;
}
