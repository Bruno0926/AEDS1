#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
    

    int main(){
        int a, b, c;

        printf("\nDigite a nota de 3 alunos: ");
        scanf("%d %d %d", &a, &b, &c);

        media (a, b, c);


        return 0;
    }

    int media (int n , int n1 , int n2 , int m ){

        m = n + n1 + n2 / 3;

        printf("\nMedia das notas :%d", m);
        
        return 0;
    }