#include <stdio.h>
#include <math.h>

int digitos(int n){

    if (n < 10) return n;
    else return (n % 10) + digitos  (n / 10);

}

int main(int a){

    printf("\nDigite um numero: ");
    scanf("%d", &a);

    printf("\nA soma dos digitos e: %d", digitos (a));

    return 0;
}