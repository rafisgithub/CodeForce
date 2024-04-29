#include<stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    unsigned long int multiplication = (long long int)a*b*c*d;

    int last_two_digit = multiplication%100;
    printf("%d",last_two_digit);
    return 0;
}