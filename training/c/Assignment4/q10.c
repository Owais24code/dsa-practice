#include <stdio.h>

int main(){
    int m1, m2,m3,m4,m5,total,percentage;
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);

    total =m1+m2+m3+m4+m5;
    percentage = total/5;

    if(percentage >=90){
        printf("Grade A");
    }
    else if(percentage < 90 && percentage >=80){
        printf("Grade B");
    }
    else if(percentage < 80 && percentage >= 70){
        printf("Grade C");
    }
    else if(percentage < 70 && percentage >= 60){
        printf("Grade D");
    }
    else if(percentage < 60 && percentage >= 40){
        printf("Grade E");
    }
    else{
        printf("Grade F");
    }
}