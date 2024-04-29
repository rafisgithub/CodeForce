#include<stdio.h>

int main(){
    int a,b,r;
    char c,e;
    scanf("%d %c %d %c %d",&a,&c,&b,&e,&r);

    switch (c)
    {
    case '+':
        if(a+b==r){
            printf("Yes\n");
        }else{
            printf("%d\n",a+b);
        }
        break;
    case '-':
        if(a-b==r){
            printf("Yes\n");
        }else{
             printf("%d\n",a-b);
        }
        break;
    case '*':
        if(a*b==r){
            printf("Yes\n");
        }else{
             printf("%d\n",a*b);
        }
        break;
    
    default:
   
        break;
    }
    return 0;
}