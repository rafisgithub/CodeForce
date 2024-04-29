#include <stdio.h>

int main() {
    int n;
    long long int ln;
    char c;
    float fn;
    double dn;

    scanf("%d %lld %c %f %lf", &n, &ln, &c, &fn, &dn);

    printf("%d\n%lld\n%c\n%.2f\n%.1f\n", n, ln, c, fn, dn);

    return 0;
}
