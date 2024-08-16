#include <stdio.h>
#include <math.h>

int sequencia(){

    int n, positivos, negativos;

        while(n != 0){
            printf("\nDigite o maximo 100 numeros inteiros: ");
            scanf("%d", &n);

            if(n > 0)
                positivos ++;

            if(n < 0)
                negativos ++;
        }
    printf("\nPositivos: %d / Negativos :%d", positivos, negativos);

    return 0;
}

int main(){
    int n, positivos, negativos, soma;

        while(n != 0){
            printf("\nDigite o maximo 100 numeros inteiros ");
            scanf("%d", &n);

            if(n > 0)
                positivos ++;

            if(n < 0)
                negativos ++;
        }
    printf("\nPositivos: %d / Negativos :%d", positivos, negativos);
    printf("\n Segunda sequencia: ", sequencia(n, positivos, negativos));

    return 0;
}

