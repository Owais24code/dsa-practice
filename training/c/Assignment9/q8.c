#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr1[n], arr2[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }

    for(int i=0;i <n;i++){
        arr2[i]=arr1[i];
    }
    for(int i=0;i <n;i++){
        printf("%d\n",arr1[i]);
    }
    for(int i=0;i <n;i++){
        printf("%d\n",arr2[i]);
    }
}