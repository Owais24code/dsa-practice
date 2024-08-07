#include <stdio.h>
#include<string.h>

int main(){
    int res;
    char a[20],b[20];
    gets(a);
    gets(b);

   if(res == strcmp(a,b)){
     printf("both string are same");
   }
   else{
    printf("are not same");
   }
    
}