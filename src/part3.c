#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    float sum = 0;
    float count = 0;

    printf("Введите размер массива: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    printf("Введите элементы массива: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
        if (ptr[i] < 0)
        {
            printf("Номер отрицательного элемента %d : \n", i);
            sum += ptr[i];
            count++;
        }
    }

    float a = sum / count;
    printf("\n%f\n", count);
    printf("\nСреднее арифметическое отрицательных элементов: %f\n", a);
    free(ptr);
    return 0;
}
