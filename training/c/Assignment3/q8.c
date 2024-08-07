#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);

    (num > 0) ? printf("positive") : ((num == 0) ? printf("zero") : printf("negative")); 
}