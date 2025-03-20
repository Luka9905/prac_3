#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptrA, *ptrB, *ptrC;

    ptrA = (float *)malloc(sizeof(float));
    ptrB = (float *)malloc(sizeof(float));
    ptrC = (float *)malloc(sizeof(float));

    printf("Введите три числа\n");
    scanf("%f %f %f", ptrA, ptrB, ptrC);
    printf("a = %f, b = %f, c = %f\n", *ptrA, *ptrB, *ptrC);
  
    float t = *ptrA;
    *ptrA = *ptrB;
    *ptrB = t;
    
    printf("a = %f, b = %f, c = %f\n", *ptrA, *ptrB, *ptrC);
    
    free(ptrA);
    free(ptrB);
    free(ptrC);
    return 0;
}
