#include <stdio.h>

int main(){
    int n, count;

    scanf("%d",&n);

    for(int i=2;i<=n;i++){
        if(n%i==0)count++;
    }
    if(count){
        printf("prime");
    }
    else{
        
    }
}