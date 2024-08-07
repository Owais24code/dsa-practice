#include <stdio.h>


int main(){
    int temp;
    scanf("%d",&temp);

    float conversion = (temp-32)*5/9;

    printf("%.2f",conversion);
}