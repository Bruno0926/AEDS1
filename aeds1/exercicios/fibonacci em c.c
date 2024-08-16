#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int fibo(int x){
    int result;

    if (x == 0){
        result = 1;
    }
    else {
      result = x * fibo(x-1);
    }
    return result;
}

int main(){
    int fib;

    printf("\n digite o numero da sequencia: ");
    scanf("%d", &fib);


    printf("O valor do fibonacci eh: %d", fibo(fib));
   
    return 0;
}

