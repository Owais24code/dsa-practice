#include<stdio.h>

int main(){
    int n1, n2;
    scanf("%d %d",&n1,&n2);

    switch(n1>n2){
        case 1: 
            printf("n1 is max");
            break;
        case 0:
            printf(" n2 is max");
            break;
        default:
            printf("invalid number");
    }
}