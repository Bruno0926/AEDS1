#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 6

int main(){
    int i = 0, aux = 0, v[] = {1, 2, 3, 4, 5, 6};
    while (i < TAM / 2){
        aux = v[i];
        v[i] = v [TAM - 1 - i];
        v[TAM - 1 - i++] = aux;
    }
    printf("%d", v[2]);    

    return 0;
}