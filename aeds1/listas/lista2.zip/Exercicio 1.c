#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n, n1, n2, n3, n4;

    printf("\nDigite um numero positivo inteiro de 4 algarismos: ");
    scanf("%i", &n);
    if (n > 999 && n < 10000);
    printf("\nCorreto");

    n1 = n / 1 % 10;
    n2 = n / 10 % 10;
    n3 = n / 100 % 10;
    n4 = n / 1000 % 10;
   
   printf("\n%d", n1);
   printf("%d", n2);
   printf("%d", n3);
   printf("%d", n4);

    return 0;

}