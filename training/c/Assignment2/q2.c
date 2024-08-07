#include <stdio.h>

int main(){
    int m1,m2,m3,m4,m5;
    scanf("%d %d %d %d %d", &m1, &m2,&m3,&m4,&m5);
    int total = m1+m2+m3+m4+m5;

    int avg = total /5;

    float  percentage = avg%100;

    printf("%.2f",percentage);
}