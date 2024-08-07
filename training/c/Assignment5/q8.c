#include <stdio.h>

int main(){
    char op;
    int a ,b;
    scanf("%c %d %d",&op,&a,&b);
    int cal = 0;
    switch (op)
    {
    case '+':
        cal = a+b;
        break;
    case '-':
        cal =a-b;
        break;
    case '*':
        cal = a*b;
        break;
    case '/':
        cal =a/b;
        break;
    default:
        printf("invalid operation");
        break;
    }
    printf("%d %c %d = %d",a,op,b,cal);
}