#include<stdio.h>
#include<string.h>
int main(){
    char f1[100];
    char s1[100];
    char f2[100];
    char s2[100];
    scanf("%s %s %s %s",f1,s1,f2,s2);
    int result = strcmp(s1,s2);
   if(result==0){
    printf("ARE Brothers\n");
   }else{
    printf("NOT\n");
   }
    return 0;
}