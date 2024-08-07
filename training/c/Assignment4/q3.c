#include<stdio.h>

int main(){

char ch;
    scanf("%c",&ch);
    if((ch >= 65 && ch <= 90) ||  (ch>=92 && ch<=122)){
        printf("%c is a character",ch);
    }
    else if(ch >= 48 && ch <= 57 ){
        printf(" %c is number.");
    }
    else{
        printf("%c is special character");
    }
}