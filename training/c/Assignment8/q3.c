#include <stdio.h>
#include <math.h>
int main(){
    int n , ld, fd,digits,swapnum,x=1;
    scanf("%d",&n);

    ld = n%10;
    digits=(int)log10(n);

    for(int i=0;i<digits;i++){
        x=x*10;
    }
    fd= n/x;
    swapnum=ld;
    swapnum*=x;
    swapnum+=n%x;
    swapnum-=ld;
    swapnum+=fd;

    printf("%d\n",n);
    printf("%d\n",swapnum);
}