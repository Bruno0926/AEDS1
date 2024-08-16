#include <stdio.h>
#include <math.h>

int main(){

    int n;
    
    printf("\nDigite a idade do nadador: ");
    scanf("%d", &n);

    categoria (n);

    return 0;
}

int categoria (int i){

    if (i > 0 & i < 7){
        printf("\nCategoria F");
    }
    if (i >= 8 & i <= 10){
        printf("\nCategoria E");
    }
    if (i >= 11 & i <= 13){
        printf("\nCategoria D");
    }
    if (i >= 14 & i <= 15){
        printf("\nCategoria C");
    }
    if (i >= 16 & i <= 17){
        printf("\nCategoria B");
    }
    if (i >= 18){
        printf("\nCategoria A");
    }

    return 0;
}
