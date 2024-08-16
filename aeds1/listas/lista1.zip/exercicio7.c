#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float a, b, c, valor, fa, fb, fc, pa, pb, pc, valorInvestido;

    printf("\nDigite o valor amigo 1: ");
    scanf("%f", &a);

    printf("\nDigite o valor amigo 2: ");
    scanf("%f", &b);

    printf("\nDigite o valor amigo 3: ");
    scanf("%f", &c);

    printf("\nDigite o valor total do premio: ");
    scanf("%f", &valor);

    valorInvestido = a + b + c;

    pa = a / valorInvestido;
    pb = b / valorInvestido;
    pc = c / valorInvestido;

    fa = valor * pa;
    fb = valor * pb;
    fc = valor * pc;

    printf("\nAmigo 1 ganhou: %.2f", fa);
    printf("\nAmigo 2 ganhou: %.2f", fb);
    printf("\nAmigo 3 ganhou: %.2f", fc);

    return 0;
}