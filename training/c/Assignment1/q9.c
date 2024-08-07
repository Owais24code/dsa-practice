#include <stdio.h>


int main(){
    int amount;
    scanf("%d",&amount);

    int hundred=amount/100;
    amount = amount%100;

    int fifty = amount/50;
    amount = amount%50;

    int twenty = amount/20;
    amount = amount%20;

    int ten = amount/10;
    amount= amount%10;

    int fives= amount/5;
    amount=amount%5;

    int twos=amount/2;
    amount=amount%2;

    int ones=amount/1;
    amount=amount%1;

    printf("%d , %d , %d , %d , %d , %d,  %d", hundred,fifty,twenty,ten,fives,twos,ones); 
}