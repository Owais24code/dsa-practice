#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char a[20]="owaiskhan";
    int len =strlen(a);
    char maxChar;
    int count=0;
    int ans[256]={0};
    for(int i=0;i<len;i++){
         ans[(int)a[i]]++;
    }
    for(int i=0;i<len;i++){
        if(ans[(int)a[i]] > count){
            count = ans[(int)a[i]];
            maxChar = a[i];
        }
    }
    printf("%c %d ", maxChar,count);
}