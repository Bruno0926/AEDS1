#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int media(){
    int a, b, c, m;

    m = a + b + c / 3;

    printf("\nA media e: %d", m);

    if (m <= 39){
        printf("\nConceito F");

    }
    if (m >= 40 & m <= 59){
        printf("\nConceito E");

    }
    if (m >= 60 & m <= 69){
        printf("\nConceito D");

    }
    if (m >= 70 & m <= 79){
        printf("\nConceito C");

    }
    if (m >= 80 & m <= 89){
        printf("\nConceito B");

    }
    if (m >= 90){
        printf("\nConceito A");

    }   
    return 0;
}

int main(){
    int n1, n2, n3;

    printf("\nDigite a nota de 3 alunos: ");
    scanf("%d %d %d", &n1, &n2, &n3);

        media(n1, n2, n3);

    return 0;
}

