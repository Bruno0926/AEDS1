#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
    int num, valor;

    printf("\nDigite quantos valores serao digitados(10): ");
    scanf("%d", &num);

    printf("\nDigite os numeros: ");

   while (num > 0){
        scanf("%d", &valor);
    
    if(valor % 3 == 0 || num % 9 == 0)
    printf("\nE divisivel por 3 ou 9 \n");

    else
    printf("\nNao e divisivel por 3 e 9 \n");

    if(valor % 2 == 0 || num % 5 == 0)
    printf("\nE divisivel por 2 ou 5 \n");

    else
    printf("\nNao e divisivel por 2 e 5 \n");
    
    num--;

    }
    
    return 0;
}






    




