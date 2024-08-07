#include <stdio.h>

int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);

    int arr1[n1],arr2[n2];
    
    for(int i =0 ;i<n1;i++){
        scanf("%d",&arr1[i]); 
    }
    for(int i =0 ;i<n2;i++){
        scanf("%d",&arr2[i]); 
    }

    int mergeSize = n1+n2;
    int mergeArray[mergeSize];
    int ind1=0,ind2=0,k;

    for(k=0;k<mergeSize;k++){
        if(arr1[ind1] < arr2[ind2]){
            mergeArray[k]=arr1[ind1];
            ind1++;
        }
        else{
            mergeArray[k]=arr2[ind2];
            ind2++;
        }
    }

    while(ind1 < n1){
        mergeArray[k]=arr1[ind1];
        k++;
        ind1++;
    }

    while(ind2 < n2){
        mergeArray[k]=arr2[ind2];
        k++;
        ind2++;
    }
    for(int i=0;i<mergeSize;i++){
        printf("%d ",mergeArray[i]);
    }
}