#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, area, s;

    printf("digite o lado a: \n");
    scanf("%i", &a);

    printf("digite o lado b: \n");
    scanf("%i", &b);

    printf("digite o lado c: \n");
    scanf("%i", &c);

    s = a+b+c / 2;
    area = sqrt (s*(s-a)*(s-b)*(s-c));

    printf("area: %i\n", area);


    return 0;


}