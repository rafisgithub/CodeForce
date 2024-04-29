#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);

    if(c >='A' && c <= 'Z'){
        printf("%c\n",c + ('a'-'A'));
    }else{
        printf("%c\n",c-('a'-'A'));
    }

    return 0;
}
