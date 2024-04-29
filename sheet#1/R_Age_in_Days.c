#include<stdio.h>

int main(){
    unsigned int days;
    scanf("%u",&days);

    unsigned int year;
    unsigned int months;
    year = days/365;
    unsigned int r_days = days%365;
    months = r_days / 30;
    unsigned int r_days_after_months = r_days%30;
    printf("%u years\n", year);
    printf("%u months\n", months);
    printf("%u days\n", r_days_after_months);

    return 0;
}
