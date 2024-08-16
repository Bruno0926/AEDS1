#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main() {
    int a, b, c, *n, *x, *m;

    printf("\nDigite 3 valores: ");
    scanf("%d %d %d", &a, &b, &c);

    n = &a;
    x = &b;
    m = &c;

    if (n > x > m) printf("\nO maior endereco e:%d %d %d",n, x, m );
    else 
     if (x > n > m) printf("\nO maior endereco e:%d %d %d",x, n, m );
    else 
     if (m > n > x) printf("\nO maior endereco e:%d %d %d",m, n, x );
    else 
        if (n > m > x) printf("\nO maior endereco e:%d %d %d",n, m, x );
    else 
        if (x > m > n) printf("\nO maior endereco e:%d %d %d",x, m, n );
    else 
        if (m > x > n) printf("\nO maior endereco e:%d %d %d",m, x, n );

return 0;
}


