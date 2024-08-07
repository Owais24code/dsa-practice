#include <stdio.h>

int main(){
    int digit,n;
    scanf("%d",&digit);
    int arr[10]={0};
    int i, lastDigit;
    n = digit;

    while(n!=0){
        lastDigit = n %10;
        arr[lastDigit]++;
        digit =n /10;
    }
    for(i=0 ;i < 10 ;i++){
        if(arr[i] !=0)
        printf("%d = %d ", i, arr[i]);
    }
    return 0;
}
