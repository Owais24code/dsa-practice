#include<stdio.h>

int main(){
    int exponent,base;
    int power=1;

    scanf("%d %d",&exponent,&base);
    for(int i=0;i<exponent;i++){
        power *=base;
    }
    printf("%d * %d = %d",base,exponent,power);

}