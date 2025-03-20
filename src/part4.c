#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    int *b;
    float *c;
    int c_size = 0;

    printf("Введите размер массива: ");
    scanf("%d", &n);

    b = (int *)malloc(n * sizeof(int));
    if (b == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    printf("Введите элементы массива:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < n; i++) {
        if (b[i] > 0) {
            c_size++;
        }
    }

    c = (float *)malloc(c_size * sizeof(float));
    if (c == NULL) {
        printf("Ошибка выделения памяти!\n");
        free(b);
        return 1;
    }

    int c_index = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] > 0) {
            c[c_index] = sqrt(b[i]) / 5.0;
            c_index++;
        }
    }

    printf("Массив c до сортировки:\n");
    for (int i = 0; i < c_size; i++) {
        printf("%.2f ", c[i]);
    }
    printf("\n");

    for (int i = 0; i < c_size - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < c_size; j++) {
            if (c[j] < c[min_index]) {
                min_index = j;
            }
        }
        float temp = c[i];
        c[i] = c[min_index];
        c[min_index] = temp;
    }

    printf("Массив c после сортировки:\n");
    for (int i = 0; i < c_size; i++) {
        printf("%.2f ", c[i]);
    }
    printf("\n");

    free(b);
    free(c);

    return 0;
}
