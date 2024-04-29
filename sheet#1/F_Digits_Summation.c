#include<stdio.h>

int main(){
    long long int n,m;
    
    scanf("%lld %lld",&n,&m);

    int get_n_last_digit;
    get_n_last_digit = n %10;
    int get_m_first_digit;
    get_m_first_digit = m%10;
    
    int sum = 0;
    sum = get_n_last_digit + get_m_first_digit;
    printf("%d\n",sum);
    return 0;
}