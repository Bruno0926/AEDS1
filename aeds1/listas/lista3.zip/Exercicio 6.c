#include <stdio.h>
#include <conio.h>

int main()
{

int n;
float i, soma;

printf("Entre com um numero inteiro: ");
scanf("%d" , &n);

soma=0;

for(i=1 ; i<=n ; i++)
{

float resultado=1/i;

soma=soma+resultado;

}

printf("\nA soma dos termos ser%c: %f\n" , 160 , soma);

getch();

return 0;

}