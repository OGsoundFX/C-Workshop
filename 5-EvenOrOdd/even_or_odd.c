#include <stdio.h>
#include <stdlib.h>

char *even_or_odd(int num) {
  if (num %2 == 0)
    return "even";
  else
    return "odd";
}

int main() {
  char num[10];
  printf("Type in a number\n");
  scanf("%s", num);
  
  char *response = even_or_odd(atoi(num));
  printf("Your number is %s\n", response);
  return 0;
}
