#include<stdio.h>

int main(){
   unsigned int n;
   scanf("%u",&n);

  unsigned long long int sum =0;
   sum =(unsigned long long int) n*(n+1)/2;
   printf("%llu\n",sum);

    return 0;
}