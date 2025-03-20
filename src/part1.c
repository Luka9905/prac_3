#include <stdio.h>

int main() {
    int a, b;

    printf("a = ");
    scanf("%d", &a);
    printf("b =  ");
    scanf("%d", &b);

    int *ptrA = &a;
    int *ptrB = &b;

    *ptrA *= 2;

    *ptrB /= 2;

    printf("Новое a = %d\n", a);
    printf("Новое b = %d\n", b);

    return 0;
}
