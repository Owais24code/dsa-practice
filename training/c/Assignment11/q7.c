#include<stdio.h>

int main(){
    int row, col;
    int a[100][100],b[100][100],equal=0;
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
            if(a[i][j] == b[i][j]){
                equal++;
            }
        }
    }

    if(equal){
        printf("equal matrix");
    }
    else{
        printf("not equal matrix");
    }
}
    