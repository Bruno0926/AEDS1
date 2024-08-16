#include <stdio.h>
#include <math.h>

int divisao (int n, int d){
    if (d > n) return 0;
    else return divisao (n - d, d) +1;

}

int main(int a, int b){

    printf("\nDigite 2 numeros: ");
    scanf("%d %d", &a, &b);

    printf("\nO resultado da divisao e: %d", divisao (a, b));

    return 0;
}