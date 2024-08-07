#include <stdio.h>

int main(){
    int n, countEven =0, countOdd=0;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i <n;i++){
        if(arr[i]%2==0){
            countEven++;
        }
        else{
            countOdd++;
        }
    }
    printf("no of Even %d and no of Odd are %d",countEven,countOdd);
}