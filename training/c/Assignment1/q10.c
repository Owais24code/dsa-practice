#include<stdio.h>

int main(){
    int sec;
    scanf("%d",&sec);

    int hours=sec/(60*60);
    sec=sec%(60*60);

    int minutes = sec/60;
    sec=sec%60;

    printf("H:M:S = %d %d %d",hours,minutes,sec);
}