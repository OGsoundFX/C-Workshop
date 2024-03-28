#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = '7';

    printf("isdigit(ch) returns: %d\n", isdigit(ch));
    printf("isalpha(ch) returns: %d\n", isalpha(ch));
    printf("isalnum(ch) returns: %d\n", isalnum(ch));

    return 0;
}
