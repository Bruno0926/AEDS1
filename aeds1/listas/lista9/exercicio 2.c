#include <stdio.h>
#include <math.h>

void dobro();
int main(){
    int x = 5, *p;

    *p = &x;
    printf("O dobro de %d", p); 
 
    dobro(x); 
    printf("eh igual a %d", x); 
 
  return 0; 
}

void dobro(int *x){
x = *x * 2;
}

