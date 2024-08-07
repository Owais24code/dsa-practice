#include <stdio.h>

int main(){
    int n1;
    scanf("%d",&n1);

    if(n1% 4 == 0 || n1%400==0){
        printf("leap year");
    }
    else{
        printf("not a leap year");
    }
}