#include <stdio.h>
#include<string.h>

int main(){
    char a[20]="owais";
    int len = strlen(a);
    int vowels =0, consonant=0;//counter
    for(int i=0;i<len;i++){
        if((a[i] == 'a' || a[i]=='i'|| a[i] == 'A'|| a[i] == 'I' || a[i] == 'e' || a[i]=='o'|| a[i] == 'u'|| a[i] == 'E' || a[i] == 'O' || a[i]=='U')){
            vowels++;
        }
        else{
            consonant++;
        }
    }    
    printf("number of alphabet vowels are %d\n number of consonants  are %d\n",vowels,consonant);
}