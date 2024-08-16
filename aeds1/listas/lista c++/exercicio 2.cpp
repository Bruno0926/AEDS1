#include <iostream>
using namespace std;

int main()
{
    int n, positivo, negativo, num, zero, cont;
    cout<<"Digite o tamanho da sequencia: "; 

    cin>>n;                            
    positivo   = 0;
    negativo = 0;
    zero = 0;
    cont  = 0;
    while (cont<n)
    {
        cout<<"Digite o numero: ";
        cin>>num;
        if (num > 0){
            positivo = positivo +1;
        }
        if(num < 0){
            negativo = negativo +1;
        }
        cont = cont + 1;

        if(num == 0){
            zero = zero +1;
        }
    }
    cout<<"A sequencia e formada por "<< positivo <<" positivos "<< negativo <<" negativos" << zero <<" zeros." <<endl<<endl;
    return 0;
}