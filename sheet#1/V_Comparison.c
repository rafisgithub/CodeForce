#include<stdio.h>

int main(){
    int a,b;
    char c;
    scanf("%d %c %d",&a,&c,&b);

    switch (c)
    {
    case '>':
        if(a>b){
            printf("Right\n");
        }else{
            printf("Wrong\n");
        }
        break;
    case '<':
        if(a<b){
            printf("Right\n");
        }else{
             printf("Wrong\n");
        }
        break;
    case '=':
        if(a==b){
            printf("Right\n");
        }else{
             printf("Wrong\n");
        }
        break;
    
    default:
   
        break;
    }
    return 0;
}