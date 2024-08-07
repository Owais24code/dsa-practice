#include <stdio.h>
#include<string.h>

int main(){
    char a[20]="owaiskhan";
    int count=0;
    int len =strlen(a);
    char ch;
    scanf("%c",&ch);

    for(int i=0;i<len;i++){
        if(a[i] == ch){
            count++;
        }
        else{
            continue;
        }
    }
    printf("%c appears %d",ch,count);
}