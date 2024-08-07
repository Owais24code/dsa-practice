#include <stdio.h>

int main(){
    int month;
    scanf("%d",&month);
    if(month ==2 ) {
        printf("28 days");
    }
    else if(month == 4|| month == 6 || month == 9 || month ==11 ){
        printf("30 days");
    }
    else{
        printf("31 days");
    }
}