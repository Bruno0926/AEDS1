#include <stdio.h>
#include <math.h>

int fatorial(int n){

    int soma;
    
    soma = 1/ n * fatorial(n-1);
    
    while(n > 0){

    printf("\nA soma e: %d", soma);

    return soma;
    }
}
    
int main(int a){
    
    printf("\nDigite um numero: ");
    scanf("%d", &a);

    printf("%d", fatorial(a));

}