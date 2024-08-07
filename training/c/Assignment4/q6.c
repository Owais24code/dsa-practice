#include <stdio.h>

int main(){
    int a1, a2, a3;
    scanf("%d %d %d",&a1,&a2,&a3);

    int valid = a1+a2+a3;
    (valid <=180) ? printf("valid"): printf("not a valid");
}