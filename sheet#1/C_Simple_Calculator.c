#include<stdio.h>

int main(){

    int x,y;
    scanf("%u %u",&x,&y);
    printf("%u + %u = %u\n",x,y,x+y);
    printf("%u * %u = %llu\n",x,y,(unsigned long long)(x*y));
    printf("%u - %u = %d\n",x,y,x-y);
    return 0;
}