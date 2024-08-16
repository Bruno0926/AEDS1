#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float primeiro, segundo, terceiro;
    float juros = 1.01;

    primeiro = 500;
    segundo = primeiro * juros;
    terceiro = segundo * juros;

    printf("no terceiro mes eu tenho %.2f reais na poupanca\n", terceiro);



    return 0;
}