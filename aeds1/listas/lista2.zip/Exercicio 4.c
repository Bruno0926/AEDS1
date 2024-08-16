#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    printf("\nDigite qual a sua nota: ");
    scanf("%i", &n);

    if ( (8 <= n) &&  (n <= 10) )
        printf("\nOtimo");
    else
    
        if ( (7 <= n) && (n < 8) )
            printf("\nBom");
        else

            if ( (5 <= n) && (n < 7) )
                 printf("\nRegular");
            else
    
                if ( (5 > n) && (n >= 0) )
                     printf("\nInsatisfatorio");
                else
return 0;

} 
