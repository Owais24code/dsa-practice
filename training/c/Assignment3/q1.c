#include <stdio.h>

int main(){
    int n1, n2;
    scanf("%d %d",&n1,&n2);

    int greater = n1>n2? n1 : n2;
    printf("%d",greater);
}