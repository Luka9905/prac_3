#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    int *ptrb;
    float *ptrc;
    int c_size = 0;

    printf("Введите размер массива: ");
    scanf("%d", &n);

    ptrb = (int *)malloc(n * sizeof(int));

    printf("Введите элементы массива:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptrb[i]);
    }

    for (int i = 0; i < n; i++) {
        if (ptrb[i] > 0) {
            c_size++;
        }
    }

    ptrc = (float *)malloc(c_size * sizeof(float));

    int c_index = 0;
    for (int i = 0; i < n; i++) {
        if (ptrb[i] > 0) {
            ptrc[c_index] = sqrt(ptrb[i]) / 5.0;
            c_index++;
        }
    }

    printf("Массив С до сортировки:\n");
    for (int i = 0; i < c_size; i++) {
        printf("%.2f ", ptrc[i]);
    }
    printf("\n");

    for (int i = 0; i < c_size - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < c_size; j++) {
            if (ptrc[j] < ptrc[min_index]) {
                min_index = j;
            }
        }
        float t = ptrc[i];
        ptrc[i] = ptrc[min_index];
        ptrc[min_index] = t;
    }

    printf("Массив С после сортировки:\n");
    for (int i = 0; i < c_size; i++) {
        printf("%.2f ", ptrc[i]);
    }
    printf("\n");

    free(ptrb);
    free(ptrc);

    return 0;
}
