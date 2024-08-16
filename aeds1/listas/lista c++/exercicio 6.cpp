#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

class Pessoa
{
public:
    int dia;
    char nome[10];
    int mes;  
   
};

int main(){

    Pessoa pessoas [3] = {

        {16, "Bruno", 10},
        {27, "Marcella", 12},
        {1, "Jobson", 11},

    };

    return 0;
}

// nao consegui ainda apenas mexer com arquivos dentro de c++