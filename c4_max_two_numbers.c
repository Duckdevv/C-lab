#include <stdio.h>

int main() {
    int a, b;

    printf("Entrer a: ");
    scanf("%d", &a);

    printf("Entrer b: ");
    scanf("%d", &b);

    if (a > b) {
        printf("Max = %d", a);
    } else if (b > a) {
        printf("Max = %d", b);
    } else {
        printf("Equal");
    }

    return 0;
}
