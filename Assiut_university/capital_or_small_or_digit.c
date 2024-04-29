#include<stdio.h>

int main(){
    char c;
    scanf("%c",&c);

    if(c>='0' && c<='9'){
        printf("IS DIGIT\n");
    }else{
        printf("ALPHA\n");
        if(c>='A' && c<='Z'){
           printf("IS CAPITAL\n");
        }else{
             printf("IS SMALL\n");
        }
      
    }
    return 0;
}