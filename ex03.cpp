#include <stdio.h>

int main() {
    char str[] = "Hello";
    int size=sizeof(str)/sizeof(char);
    
    for (int i=0;i<(size-1)/2; i++) {
        char index = str[i];
        str[i]= str[size-i-2];
        str[size-i-2]= index;
    }
    for(int i=0; i<size-1; i++){
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
