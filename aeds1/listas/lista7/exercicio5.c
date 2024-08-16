#include <stdio.h>

int main()
{
    int i = 1;
    int *ponteiroint = &i;
    
    float f = 0.6;
    float *ponteirofloat = &f;
    
    char c ='a';
    char  *ponteirochar = &c;
    
   *ponteiroint = 2;
   *ponteirofloat = 0.2;
   *ponteirochar = 'b';

    printf("Inteiro %i ", *ponteiroint);
    printf("\n Real %f",  *ponteirofloat);
    printf("\nChar %c", *ponteirochar);

}