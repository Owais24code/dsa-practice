#include <stdio.h>
#include<string.h>

int main(){
    char a[20]="compiler";
    char b[10]="design";
    strcat(a,b);
    printf("concated string is  %s",a);
}