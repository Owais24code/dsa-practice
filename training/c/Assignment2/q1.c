#include <stdio.h>

#include<math.h>


int main(){
    int principal;
    int time;
    double rate;

    scanf("%lf %lf %lf", &principal,&time,&rate);

    float CI =principal*((pow((1+rate/100),time)));
    
 

    printf("%f",CI);
}