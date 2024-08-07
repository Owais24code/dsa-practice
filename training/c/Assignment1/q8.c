#include <stdio.h>

int main(){
    int days;

    scanf("%d", &days);

    int years =days/365;
    days=days%365;
    int weeks = days/7;
    days=days%7;

    printf("%d years %d weeks %d days", years, weeks, days);
     
}