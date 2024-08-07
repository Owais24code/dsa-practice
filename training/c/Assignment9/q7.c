#include <stdio.h>

int main(){
    int n,countNegative=0;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i <n;i++){
        if(arr[i] <0){
            countNegative++;
        }
    }
    printf("no of negative number is %d",countNegative);
    return 0;
}