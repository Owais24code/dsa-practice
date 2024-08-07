#include<stdio.h>

int main(){
    int row, col;
    int a[100][100],b[100][100],mul[100][100];
    scanf("%d",&row);
    scanf("%d",&col);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&b[i][j]);
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            mul[i][j]=0;
            for(int k=0;k<col;k++){
            mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d\n",mul[i][j]);
        }
    }
}