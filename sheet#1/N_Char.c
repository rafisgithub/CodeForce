#include<stdio.h>

int main(){
    char c;
    scanf("%c",&c);
  
    if(c>='a' && c<='z'){
        c-=32;
    }else{
        c+=32;
    }
    printf("%c",c);
    return 0;
}