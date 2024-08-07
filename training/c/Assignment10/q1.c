#include <stdio.h>

int main(){
    int n,count=1;
    scanf("%d",&n);

    int arr[n] ,freq[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }
    for(int i=0;i <n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0){
            freq[i]=count;
        }
    }
    for(int i=0;i<n;i++){
        if(freq[i] != 0){
            printf("element %d has %d freq\n",arr[i],freq[i]);
        }
    }
}