#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a;

    resultado (a);
    
    return 0;
}

int resultado (){
    int n;
    float soma;
    int auxiliar =1 ;


    while( auxiliar ) {
        
        printf("\nDigite um numero qualquer ou 0 para terminar");
        scanf("%d", &auxiliar);
        
        printf("\nUsuario digitou %d ",auxiliar);
        
        if (auxiliar) {
          printf("\nVamos somar até %d",auxiliar);
          soma=0;
          
          for (n=1; n<=auxiliar; n++){
              soma += (n * n+1.0) / (n + 3.0);
          };
         
          printf("\nO resultado da serie é %f",soma);
        }
        else {
             printf("\nentrada terminada pelo usuario");
        }
    }

    return 0;

}