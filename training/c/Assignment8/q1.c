#include <stdio.h>

int main(){
    int n , ld, fd;
    scanf("%d",&n);

    ld = n%10;
    fd= n;
    while(fd >=10){
        fd/=10;
    }
    printf("first = %d\n",fd);
    printf("last = %d",ld);
}