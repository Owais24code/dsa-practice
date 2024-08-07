#include <stdio.h>
#include<string.h>

int main(){
    char a[20]="owais@24";
    int len = strlen(a);
    int Alpha =0, num=0,special=0;//counter
    for(int i=0;i<len;i++){
        if((a[i] >= 'a' && a[i]<='z')|| (a[i] >= 'A' && a[i] <= 'Z')){
            Alpha++;
        }
        else if(a[i] >= '1' && a[i]<='9'){
            num++;
        }
        else{
            special++;
        }
    }    
    printf("number of alphabet are %d\n number of numeric value are %d\n numnber of special symbol are %d",Alpha,num,special);
}