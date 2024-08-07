#include<stdio.h>

int main(){
    int row, col;
    int a[100][100],sum=0;
    scanf("%d",&row);
    scanf("%d",&col);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        sum+=a[i][row-1-i];
    }
    printf("%d",sum);
}
    