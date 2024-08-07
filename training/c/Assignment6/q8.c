#include <stdio.h>

int main(){
    int i =1,n,sum=0;
    scanf("%d",&n);
    while(i <=n){
        if(i%2!=0)
            sum=sum+i;
        i++;
    }
    printf("%d",sum);
}