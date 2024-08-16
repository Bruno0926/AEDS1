#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n1, n = 0, p = 0, z = 0, valor;

    printf("\nDigite quantos valores serao digitados: ");
    scanf("%d", &n1);

    printf("\nDigite os valores: ");


    while(n1 > 0){
        scanf("%d", &valor);

      if (valor > 0)
        p++;
      if (valor < 0)
        n++;
      if (valor == 0)
        z++;

        n1--;
    }
        printf("\nPositivos = %d", p);
        printf("\nNegativos = %d", n);
        printf("\nZero = %d", z);

    return 0;
}
