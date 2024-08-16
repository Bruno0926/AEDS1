#include <stdio.h>
#include <math.h>

    void media (int n1, int n2, int n3, char tipo){

    float media = 0;

    if (tipo == 'A'){
        media = (n1 + n2 + n3) / 3;
    }

    else if (tipo = 'P'){
        media = (n1 * 5 + n2 * 3 + n3 * 2) / 10;
    }
        printf("\n%f", media);
    }

    int main(){

        int i, n, nota1, nota2, nota3;
        char escolha;
        printf("Digite : \n A - media aritmetica \n P - media ponderada:\n");
        scanf("%d", &n);
        

        for (i = 0; i < n; i++){
            
            printf("\nDigite a nota dos 3 alunos: ");
            scanf("\n%0.1d%0.1d%0.1d", nota1, nota2, nota3);

            media (nota1, nota2, nota3, 'A');
            media (nota1, nota2, nota3, 'P');
        }
        return 0;
    }