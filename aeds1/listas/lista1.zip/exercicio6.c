#include <stdio.h>
#include <math.h>

int main()
{
    float seg, min, hr;
    printf("\nDigite um tempo em segundos: ");
    scanf("%f.", &seg);

    min = seg / 60;
    hr = seg / 3600;

    printf("\n%fseg sao iguais: %f min", seg, min);
    printf("\n%fseg sao iguais: %f hr", seg, hr);

    return 0;
}