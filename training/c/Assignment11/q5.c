#include<stdio.h>

int main(){
    int row, col,num;
    int a[100][100],new[100][100];
    scanf("%d",&row);
    scanf("%d",&col);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }

    scanf("%d",&num);

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            new[i][j]=num * a[i][j];
    }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d\n",new[i][j]);
        }
    }
}