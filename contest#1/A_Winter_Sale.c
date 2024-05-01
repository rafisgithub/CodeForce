#include<stdio.h>

int main(){
    int discount,after_discount_p;
    scanf("%d %d",&discount,&after_discount_p);

    float ans = after_discount_p/(1-(discount/100));

    printf("%.2f",ans);
    
    return 0;
}