#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int tam = 2;
struct Banda{
    char nome[50];
    char tipo[50];
    int posicao;
};

int main(){

    struct Banda banda[tam];
    
    for(int i = 0; i < tam; i++ ){
        printf("\n Digite o nome da banda: ");
        gets(banda[i].nome);

        printf("\n Digite o tipo de musica: ");
        gets(banda[i].tipo);

        printf("\n Digite o numero de posicao da banda: ");
        scanf("%d", &banda[i].posicao);
    }

    for(int i = 0; i < tam; i++ ){
        printf("\n o nome da banda eh: %s", banda[i].nome);
        printf("\n o tipo da banda eh: %s", banda[i].tipo);
        printf("\n a posicao da banda eh: %d", banda[i].posicao);
    }
  
    return 0;
}