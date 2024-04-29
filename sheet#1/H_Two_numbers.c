#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    float division = (float)a / b;

    printf("floor %d / %d = %.0f\n", a, b, floor(division));
    printf("ceil %d / %d = %.0f\n", a, b, ceil(division));
    printf("round %d / %d = %.0f\n", a, b, round(division));
    
    return 0;
}
