#include<stdio.h>
int findMax(int a,int b,int c);
int findMin(int a,int b,int c);
int main(){
    int a,b,c;
    int max;
    int min;
    scanf("%d %d %d",&a,&b,&c);

    max = findMax(a,b,c);
    min = findMin(a,b,c);
    printf("%d %d\n",min,max);
    return 0;
}

int findMax(int a,int b,int c){
    if(a>=b && a>=c){
        return a;
    }else if(b>=a && b>=c){
        return b;
    }else{
        return c;
    }
}

int findMin(int a,int b,int c){
    if(a<=b && a<=c){
        return a;
    }else if(b<=a && b<=c){
        return b;
    }else{
        return c;
    }
}