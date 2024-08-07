#include<stdio.h>

int main(){
    float units,total,surcharge;

    scanf("%f",&units);
    if(units  <= 50){
        total=units*0.50;
    }
    else if(units <150){
        units=units-50;
        total=25+(units*0.75);
    }
    else if(units <= 250){
        units= units-150;
        total =100+(units*1.20);
    }
    else if(units > 250){
        units = units-250;
        total = 220 +(units *1.50); 
    }
    surcharge = total*0.2;
    total=total+surcharge;
    printf("%.2f",total);
}