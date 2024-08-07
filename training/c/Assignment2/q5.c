#include<stdio.h>

int main(){
    int w1,w2;
    int n1,n2;
    scanf("%d %d %d %d", &w1,&n1,&w2,&n2);
    int total_value = (w1*n1) + (w2*n2) ;
    float avg = total_value/(n1+n2);

    printf("%f", avg);
}