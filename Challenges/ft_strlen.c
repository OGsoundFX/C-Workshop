#include <stdio.h>

int ft_strlen(char *str) {
  int i = 0;
  while (str[i] != '\0')
    i++;
  return i;
}

int main() {
  char str[100];
  printf("Write something\n");
  fgets(str, sizeof(str), stdin);
  printf("Your sentence is %d characters long.\n", ft_strlen(str));
  return 0;
}
