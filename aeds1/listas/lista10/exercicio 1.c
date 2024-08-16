#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    FILE *aln = fopen ("alunos.txt", "r");
    int i, nome, matricula, numero[4];

    fread (i, 4, aln);

    for(i = 0; i < numero; i++){
        printf("\n digite os nomes de cada aluno: ");
        scanf("%d", &nome[i] );
        printf("\n Digite as matriculas de cada aluno: ");
        scanf("%d", &matricula[i] );
    }

        printf("\n %d", recursiva);

    fclose (aln);
    return 0;
}

int recursiva(notas[]){
    FILE *nts = fopen ("notas.txt", "r");
    int i;

    fread (i, 4, nts);

    printf("\n Digite as notas de cada aluno: ");
    scanf("%d", &notas[i] );

    fslose (nts);
}