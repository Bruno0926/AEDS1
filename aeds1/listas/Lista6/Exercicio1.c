#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int v[50], n, i;
    printf("\nInforme o tamanho da sequencia: ");
    scanf("%d", &n);
 
   for(i = 0; i<= n; i++){

       if(n%2==0){
           printf("\n %d", i);
        }

    printf("\t %d", i);
    }
}
    