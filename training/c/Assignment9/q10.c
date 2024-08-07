#include <stdio.h>

int main(){
    int n,pos;
    scanf("%d",&n);
    scanf("%d",&pos);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(pos < 0 || pos > n){
        printf("INVALID POSITION");
    }
    else{
        for(int i=pos-1;i <n-1;i++){
        arr[i]=arr[i+1];
        n--;
        }
    }
    printf("%d",n);
}