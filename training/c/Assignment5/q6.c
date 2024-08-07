#include<stdio.h>

int main(){
    int n1;
    scanf("%d",&n1);

    switch(n1>0){
        case 1: 
            printf("n1 is positive");
            break;
        case 0:
            switch (n1 < 0)
            {
            case 1:
                printf(" neative number");
                break;
            case 0:
                printf("number is zero");    
                break;
            } 
            break;
    }
}