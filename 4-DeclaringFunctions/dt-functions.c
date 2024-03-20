#include <stdio.h>

char single_char() {
  return 'c';
}

char *string() {
  return "Hello World";
}

int number() {
  return 42;
}

float float_number() {
  return 42.42;
}

int main() {
  printf("%c\n", single_char());
  printf("%s\n", string());
  printf("%d\n", number());
  printf("%f\n", float_number()); // float has 6 decimals. To print only 2 use the syntax bellow
  printf("%.2f\n", float_number());
  return 0;
}