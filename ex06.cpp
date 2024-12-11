#include <stdio.h>

int main() {
    char str[100] = "Pham Thi Huyen Trang";
    int count = 0;

    for (int i = 0;i<100; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            count++;
    }

    printf("%d\n", count);
    return 0;
}
