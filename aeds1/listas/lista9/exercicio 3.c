#include <stdio.h>
#include <math.h>

int main(){
int i;
int data[i], hora[i], compromisso[i];

printf("\n Digite quantos meses tem no ano para organizar a sua agenda: ");
scanf("%d", &i);

for(i > 1; i = 12; i++){
    printf("\nDigite o dia do compromisso");
    scanf("%d", &data);

    printf("\nDigite a hora do compromisso");
    scanf("%d", &hora);

    printf("\nDigite o que ira fazer no compromisso");
    scanf("%d", &compromisso);
}

    return 0;
}