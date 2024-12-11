#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    while ({str[i] = getchar(); str[i] != '\n'; i++;});
    str[i] = '\0';
    printf("%s\n", str);
    i = 0;
    while ({i++;} str[i]);
    printf("%d\n", i);
    return 0;
}
