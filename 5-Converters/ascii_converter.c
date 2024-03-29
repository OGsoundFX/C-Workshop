#include <stdio.h>

int main() {
  char num = '6';
  int conv_num = num - '0';
  printf("%d\n", conv_num);
  num = conv_num + '0';
  printf("%c\n", num);
  return 0;
}
