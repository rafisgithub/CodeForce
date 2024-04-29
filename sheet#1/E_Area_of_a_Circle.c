#include<stdio.h>
#define PI 3.141592653
int main(){
    float r;
    scanf("%f",&r);
    double area = 0;
    area = (double)PI*r*r;
    printf("%.9f\n",area);
    return 0;
}