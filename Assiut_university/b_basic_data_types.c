#include <stdio.h>

int main() {
    int x;
    long long int y;
    char c;
    float z;
    double d;
    
    scanf("%d %lld %c %f %lf", &x, &y, &c, &z, &d);

    printf("%d\n", x);
    printf("%lld\n", y);
    printf("%c\n", c);
    printf("%.2f\n", z);
    printf("%.1lf\n", d);

    return 0;
}
