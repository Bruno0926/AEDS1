#include <stdio.h>
#include <math.h>
#include <limits.h>

int main()
{
    int max, min, soma1, soma2;
    min = INT_MIN;
    max = INT_MAX;

    printf("\nLimite minimo: %i", min);
    printf("\nLimite maximo: %i", max);

    soma1 = (-1) - min;
    soma2 = max + 1.0;
    
    printf("\nValor final min: %i", soma1);
    printf("\nValor final max: %i", soma2);
    
    return 0;
}