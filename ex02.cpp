#include <stdio.h>
int main(){
    char str[]="Hello";
    int length= sizeof(str)/ sizeof(char);
    for(int i=0; i<length-1; i++){
        printf("%c ", str[i]);
    }
    printf("\n");
    return 0;
}
