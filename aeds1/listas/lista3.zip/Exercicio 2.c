#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n1, n = 0, p = 0, z = 0, valor;
    float pc1, pc2, pc3;

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

        pc1 == p * n1 / 100;
        pc2 == n * n1 / 100;
        pc3 == z * n1 / 100;

        n1--;
    }
    
        printf("\nPositivos = %0.2f", pc1);
        printf("\nNegativos = %0.2f", pc2);
        printf("\nZero = %0.2f", pc3);


    return 0;

    // boa noite professora, tem como me informar o porque das % estarem aleatórias no resultado final?
}