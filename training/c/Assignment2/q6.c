#include <stdio.h>

int main(){
    int dis, fuel;

    scanf("%d %d", &dis, &fuel);

    float consumption = dis/fuel;
    printf("%.2f",consumption);
}