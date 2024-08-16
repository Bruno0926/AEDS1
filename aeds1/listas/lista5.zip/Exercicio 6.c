#include <stdio.h>
#include <math.h>

void saida(){
    int x, n;

    if (x > n){ 
        printf("\nErro");
    }else if (x <= n){
        printf("%d", x);
        saida (x + 1);
    }
}

int main(void){
    int a, b;

    printf("\nDigite 2 numeros: ");
    scanf("%d %d", &a, &b);

    printf("\nSaida: ", saida(a,b));
 
 return 0;
}
