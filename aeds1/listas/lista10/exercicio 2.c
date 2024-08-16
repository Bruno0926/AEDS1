#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    FILE *cl = fopen("arquivo.txt", "r");
    FILE *mal = fopen("arquivo.txt", "r");
    FILE *mel = fopen("arquivo.txt", "r");
    FILE *cv = fopen("arquivo.txt", "r");

    int i, linhas;

    fread(i, sizeof(int), cl); 
    fread(i, sizeof(int), mal);
    fread(i, sizeof(int), mel);
    fread(i, sizeof(int), cv);   

    fprintf("arquivo.txt", %d, linhas);
    strlen (linhas);

    return 0;
}