#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int triangulo(){
    int a = 0, b = 0, c = 0;
    
    if(a + b > c && a + c > b && b + c > a){
        printf("\nOs 3 lados formam um triangulo!");
        if(a == b && a == c)
            printf("\nEquilatero");
        else
            if(a == b || a == c || b == c)
                printf("\nIsosceles");
            else
                printf("\nEscaleno");
    }
    else
        printf("Os 3 lados NAO formam um trinagulo!");
    
    return 0;
}

int main(){
    int n, n1, n2;

    printf("\nDigite tres valores: ");
    scanf("%d %d %d", &n, &n1, &n2);

    triangulo (n, n1, n2);

    return 0;
}