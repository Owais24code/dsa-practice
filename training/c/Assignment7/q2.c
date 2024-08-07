#include <stdio.h>

int main(){
    int num,rev =0,x;
    scanf("%d",&num);
    x=num;
    while(num != 0){
        rev = (rev*10)+(num%10);   
        num/=10;   
    }
    if(num == rev){
        printf("palindrome");
    }
    else{
        printf("not a palindrome");
    }
}