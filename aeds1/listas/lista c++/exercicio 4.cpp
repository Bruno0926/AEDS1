// com o ponteiro

#include <iostream>

using namespace std;

int main (){

    int var1, var2;

    int *a, *b;

    *a = var1;
    *b = var2;

    cout << "Digite o primeiro numero inteiro: ";
    cin >> var1;

    cout << "Digite o segundo numero inteiro: ";
    cin >> var2;

    cout << "O valor dos 2 numeros sao:" << a << "e" << b;

   return 0;

}

// sem o ponteiro:

#include <iostream>

using namespace std;

int main (){

    int a, b;

    cout << "Digite o primeiro numero inteiro: ";
    cin >> a;

    cout << "Digite o segundo numero inteiro: ";
    cin >> b;

    cout << "O valor dos 2 numeros sao:" << a << "e" << b;

   return 0;

}

