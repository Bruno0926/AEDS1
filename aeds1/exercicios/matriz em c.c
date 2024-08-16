#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
int LIN = 2;
int COL = 2;

// void matriz(int a[LIN][COL], int b[LIN][COL]){
    
//      for(int i = 0; i < LIN; i++){
//         for(int j = 0; j < COL; j++){
//             printf("\n a[%d][%d]: ", i, j);
//             scanf("%d", &a[i][j]);
//             b[i][j] = a[i][j] ;
//         }
//     }
//     for(int i = 0; i < LIN; i++){
//         for(int j = 0; j < COL; j++){
//             printf("\n printar as matrizes: %d e %d", a[i][j], b[i][j] );
//         }
//     }
// }
void lerMatriz(int m[LIN][COL]){
    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            printf("\n [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
}

bool matriz(int a[LIN][COL], int b [LIN][COL]){

    bool resultado;
    lerMatriz(a);
    lerMatriz(b);
    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            if(a[i][j] == b[i][j]){
                resultado = true;
            } else{
                resultado = false;
            }
        }
    }
    return resultado;
}

int main(){
    int a[LIN][COL], b[LIN][COL], resultado;
    //matriz(a, b);
    resultado = matriz(a, b);
    printf("\n As matrizes sao iguais? %d", resultado);

    return 0;
}