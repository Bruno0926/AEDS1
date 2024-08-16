#include <stdio.h>
#include <math.h>
int main()
{
    float peso, altura;
    char sexo;
    int m, f;
    printf("\nDigite a sua altura em M: ");
    scanf("%f", &altura);

    printf("\nDigite o seu peso em Kg: ");
    scanf("%f", &peso);

    printf("\nA seguir confira se o seu peso esta ideal ou nao: ");
    scanf("%c", &sexo);

    m = 72.7 * altura - 58;
    f = 62.1 * altura - 44.7;

    if (sexo = m);
    printf("\nPeso ideal masculino: %i", m);
    if (sexo = f);
    printf("\nPeso ideal feminino: %i", f);

return 0;

}
