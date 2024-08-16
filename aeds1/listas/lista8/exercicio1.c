#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
int i, k;
float vetor[k];

printf("\nDigite quantas notas serao digitadas: ");
scanf("%d", &k);

for(i = 0; i < k; i++){
    printf("\nDigite a nota %d do aluno: ", i);
    scanf("%f", &vetor[i]);
}

for(i = 0; i < k; i++){
    printf("\nO valor da nota %d e: %1.0f", i, vetor[i]);

}

return 0;
}
