#include<stdio.h>

int main(){
    char x[10000];
    scanf("%c",&x);
    if(x[0]%2==0){
        printf("EVEN\n");
    }else{
        printf("ODD\n");
    }
    return 0;
}