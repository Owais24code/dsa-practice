#include <stdio.h>
#include <math.h>

int main(){
    int x1,x2,y1,y2;
    scanf("%d %d %d %d",&x1,&x2,&y1,&y2);

    int X= (x2-x1)*(x2-x1);
    int Y =(y2-y1)*(y2-y1);

    float dis =(sqrt(X+Y));

    printf("%.3f",dis); 
}