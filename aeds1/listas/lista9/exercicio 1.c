#include <stdio.h>
#include <math.h>

struct elet{
char nome [a];
float potencia [i];
float tempo [x];
};

int main(void){
struct elet eletros[20];
int i,x,a, consumo;

printf("/n Digite quantos eletromesticos tem na sua casa");
scanf("%d", &a);

for(i > 0; i <a; i++){
printf("/n digite a potência de cada eletrodomestico:" );
scanf("%f", & eletros[i].potencia);

printf("/n digite o tempo ativo em horas por dia de cada:" );
scanf("%f", & eletros[x].tempo);
}

consumo = eletros[i].potencia * eletros[x].tempo;

return 0;
}