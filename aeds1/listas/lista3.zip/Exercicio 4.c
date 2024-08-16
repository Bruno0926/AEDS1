#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, fat=1, f;

    printf("Informe o valor de n: ");
    scanf("%d", &n);

    for(i=n; i>1; i--){
        fat = fat*i;
    }

    printf("O valor do fatorial de %d é %d\n", n, fat);

    f = fat + 1;
    printf("\nO valor final e: %d", f);


    return 0;

}    