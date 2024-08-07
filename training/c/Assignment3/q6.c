#include <stdio.h>

int main(){
    int n1=5;
    int n2=7;

    n1=n1^n2;
    n2=n1^n2;
    n1=n1^n2;

    printf("%d %d",n1,n2);
}