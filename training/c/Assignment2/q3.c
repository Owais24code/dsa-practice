#include<stdio.h>
#include <math.h>

int main(){
    int side ;
    scanf("%d",&side);
    double area= (sqrt(3)/4)*( side*side);

    printf("%.1lf", area);

}