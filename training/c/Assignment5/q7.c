#include <stdio.h>
#include <math.h>
int main(){
    float a, b,c;
    float root1, root2;
    scanf("%f %f %f",&a,&b,&c);

    int d = b*b -4 *a*c;
    switch(d==0){
        case 1 :
            root1 = -b/(2*a);
            root2=root1;
            printf("%.2f %.2f",root1,root2);
            break;
            
        case 0:
            switch (d > 0)
            {
            case 1:
                root1=(-b + sqrt(d))/(2*a);
                root2=(-b - sqrt(d))/(2*a);
                printf("%.2f %.2f",root1,root2);
                break;
            case 0:   
                printf("root are imaginary");
                break;
            }
            break;
    }
}