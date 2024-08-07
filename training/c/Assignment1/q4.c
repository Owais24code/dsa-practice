#include <stdio.h>

int main(){
    float radius;

    scanf("%f",&radius);

    float volume= (4*3.14 * radius * radius * radius)/3;

    printf(" radius :%2.f \n",radius);

    printf("volume : %f", volume);
}