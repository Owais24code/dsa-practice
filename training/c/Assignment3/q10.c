#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int low=10;
    int high =20;

    ((num >= low) && (num < high)) ? printf("number lies in between"): printf("num does not lie in the range"); 
}