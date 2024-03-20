#include <stdio.h>

int main() {
  int num = 12;
  char str[20];

  sprintf(str, "%d", num);
  printf("%s\n", str);
  return 0;
}
