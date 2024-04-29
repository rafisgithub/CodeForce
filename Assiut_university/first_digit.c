#include<stdio.h>

int main(){
    int n;
    int digit;
    int reverse = 0;
    scanf("%d",&n);
    if(n<=999 || n>9999){
        return 0;
    }
    n = n/1000;
    if(n%2==0){
        printf("EVEN\n");
    }else{
        printf("ODD\n");
    }
    return 0;
}