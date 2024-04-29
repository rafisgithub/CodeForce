#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(pow(a,b) > pow(c,d)){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}