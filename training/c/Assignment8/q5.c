#include <stdio.h>

int main(){
    int n ,num,prod=1;
    scanf("%d",&n);
    while(n!=0){
        num=n%10;
        prod=prod*num;
        n=n/10;
    }
    printf("%d",prod);
}