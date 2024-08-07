#include <stdio.h>
#include <math.h>
int main(){
    int a, b,c;
    float root1, root2;
    scanf("%d %d %d",&a,&b,&c);

    int d = b*b -(4 *a*c);
    if(d >0){
        root1=(-b + sqrt(d))/(2*a);
        root2=(-b - sqrt(d))/(2*a);
    }
    else if(d==0)
    {
        root1 = -b/(2*a);
        root2=root1;
    }

    else{
        printf("root are imaginary");
    }


    printf("root1 = %.2f",root1);
    printf("root2 = %.2f",root2);
}