#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float num1, resultado, radiano;

    printf("digite um valor:\n");
    scanf("%f", &num1);

    radiano = num1*3.14 / 180;

    resultado = sin(num1);

    printf("%f", resultado);


    return 0;
}