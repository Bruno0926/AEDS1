#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main() {
    int a, b, *n, *x;

    printf("\nDigite 2 valores: ");
    scanf("%d %d", &a, &b);

    n = &a;
    x = &b;

    if(a > b) printf("\nO maior endereco e:%d",n );
        else
            if (b > a) printf("\nO menor endereco e: %d",x );

return 0;
}
