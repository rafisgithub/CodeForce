#include<stdio.h>

int main(){
    unsigned int a,b;

    scanf("%u %u",&a,&b);

    if(a>=b){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}