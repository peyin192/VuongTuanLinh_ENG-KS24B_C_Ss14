#include <stdio.h>

int main() {
    char str[] = "Pham Thi Huyen Trang";
    char ch;
    int count = 0;

    scanf("%c", &ch);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
