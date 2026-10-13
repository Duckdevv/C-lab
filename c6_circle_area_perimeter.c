#include <stdio.h>

int main() {
    float r, a, p;
    const P = 3.14159 ;

    printf("Entrer r: ");
    scanf("%f", &r);

    a = P * r * r;
    p = 2 * P * r;

    printf("Area = %.2f\n", a);
    printf("Perimeter = %.2f", p);

    return 0;
}
