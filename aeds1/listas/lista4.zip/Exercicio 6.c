#include <stdio.h>
#include <math.h>

int main (){
    int n;
    
    printf("\nDigite um valor inteiro positivo: ");
    scanf("%d", n);

    formula (n);
    
    return 0;
}

int formula (){
        int i, s;
        float fat, result;

        printf("Digite um numero : \n ");
        scanf("%d", &s);

        fat = 1;

        for(i=1; i<=s; i++){

            fat = fat * i;

             result = result + (1/fat);

            }
            printf("O valor de S e %d :", result);

    return 0;
}