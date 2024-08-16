#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int inteiros (int n, int n2, int n3){

    if(n < n2 && n2 < n3){
        printf("\n %d %d %d", n, n2, n3);
    }
    else if (n < n3 && n3 < n2){
        printf("\n %d %d %d", n, n3, n2 );
    }
    if(n2 < n3 && n3 < n){
        printf("\n %d %d %d", n2, n3, n);
    }
    else if (n2 < n && n < n3){
        printf("\n %d %d %d", n2, n, n3 );
    }

    if(n3 < n && n < n2){
        printf("\n %d %d %d", n3, n, n2);
    }
    else if (n3 < n2 && n2 < n ){
        printf("\n %d %d %d", n3, n2, n);
    }

    return 0;
    }

    int main(){
    int a, b, c;

    printf("\nDigite os 3 primeiros numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("\nOrdem crescente: ");

    inteiros(a, b, c);


    return 0;
}