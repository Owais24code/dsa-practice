#include <stdio.h>

int main(){
    int n1;
    scanf("%d",&n1);

    int remainder = n1%1000;
    printf("%d \t",remainder);

    remainder = n1%100;
    printf("%d \t",remainder);

    remainder = n1%10;
    printf("%d\t",remainder);

}