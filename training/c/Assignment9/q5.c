#include <stdio.h>
#include <limits.h>

int main(){
    int n ,max1 ,max2;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    max1,max2 = INT_MIN;
    for(int i=0;i <n;i++){
        if(arr[i] > max1 ){
            max2 = max1;
            max1 =arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1){
            max2 =arr[i];
        }
    }
    printf("second largest number %d ",max2);
}