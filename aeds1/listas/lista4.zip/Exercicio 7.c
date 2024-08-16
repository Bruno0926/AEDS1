#include <stdio.h>
#include <math.h>

int numeros();
int main(){

numeros();
    return 0;
}

int numeros (){
    int n;
    
    printf("\n Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n >= 0){
        printf("\nPositivo");
    }
    else{
        printf("\nNegativo");
    }
     return 0;
}