#include <stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    if((ch >= 65 && ch <= 90) ||  (ch>=92 && ch<=122)){
        printf("%c is a character",ch);
    }
    else{
        printf("not a character.");
    }
}