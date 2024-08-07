#include <stdio.h>


int main(){
    double p,r,t;
    scanf("%lf %lf %lf",&p,&r,&t);

    double SI = (p*r*t)/100;
    printf("%.2lf",SI);
}