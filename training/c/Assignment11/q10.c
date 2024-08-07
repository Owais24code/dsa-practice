#include<stdio.h>

int main(){
    int row, col;
    int a[100][100],row_sum=0, col_sum=0;
    scanf("%d",&row);
    scanf("%d",&col);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        row_sum=0,col_sum=0;
        for(int j=0;j<col;j++){
            row_sum+=a[i][j];
            col_sum+=a[j][i];
        }
        printf("%d %d \n",i+1,row_sum);
        printf("%d %d \n",i+1,col_sum);
    }
    
}
    