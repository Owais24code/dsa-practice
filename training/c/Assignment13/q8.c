#include <stdio.h>
#include<string.h>

int main(){
    char a[20]="madam";
    int flag;
    int len =strlen(a);
    for(int i=0;i<len/2;i++){
        if(a[i]!=a[len-i-1]){
            flag = 0;
        }
        else{
            flag=1;
        }
    }
    if(flag)printf("palindrome");
    else{
        printf("not apalindrome");
    }
}