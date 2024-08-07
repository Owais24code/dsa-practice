#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int num = (n < 0)? n*-1 : n;
    printf("%d",num);
}