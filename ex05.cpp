#include <stdio.h>
#include<string.h>
int main(){
    char str[]="Pham Thi Huyen Trang";
    char temp=' ';
    int count=0;
    for(int i=0; i<strlen(str); i++){
        if(i==0 && temp == str[i]){
            
        }
		else if( i== strlen(str)-1 && temp==str[i]){
            
        }
		else{
            if(str[i]==temp){
                count++;
            }
        }
    }
    printf("Chuoi co %d tu \n", count+1);
    return 0;
}
