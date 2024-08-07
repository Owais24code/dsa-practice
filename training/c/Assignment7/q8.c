#include<stdio.h>

int main(){
    int n;
    int fact=1;
    scanf("%d",&n);
    if(n==0)
    printf("%d",0);
    else if(n==1)
    printf("%d",1);
    else{
        for(int i =1;i<=n;i++){
            fact=fact*i;
        }
        printf("%d!  = %d",n,fact);
    }
}