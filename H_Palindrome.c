#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    char s[102];
    while (t--)
    {
        scanf("%s",s);
        int i = 0;
        int flag = 1;
        int j = strlen(s)-1;
        while(i<j){
            if(s[i]!=s[j]){
            flag = 0;
        }
        i++;
        j--;
        }
        if(flag){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        
    }
    
    return 0;
}