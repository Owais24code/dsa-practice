#include<stdio.h>

int main(){
    int n1;
    scanf("%d",&n1);

    switch(n1%2==0){
        case 1: 
            printf("n1 is even");
            break;
        case 0:
            printf(" n2 is odd");
            break;
        default:
            printf("invalid number");
    }
}