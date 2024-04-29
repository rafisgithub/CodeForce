#include <stdio.h>

int main() {
    float number;
    scanf("%f", &number);

    if (number == (int)number) {
        printf("int %.0f\n", number); 
    } else {
        printf("float %d %.3f\n", (int)number, number - (int)number);
    }

    return 0;
}
