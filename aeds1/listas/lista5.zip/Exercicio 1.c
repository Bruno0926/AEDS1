#include <stdio.h>
#include <math.h>

int digitos(int n){
    
    if (n < 10) return 1;
    else return digitos (n /10) +1;
    
}

int main(int a){
    printf("\nDigite um numero: ");
    scanf("%d", &a);
    
    printf("\nNumero de digitos: %d", digitos(a));
    return 0;
}

