#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

class Pessoa
{
public:
    int codigo;
    char nome[10];
    int idade;
    char end[12];
    int complemento;
    int numero;
   
};

int main(){

    Pessoa p1;

    p1.codigo = 6982;
    strcpy(p1.nome, "Joao");
    p1.idade = 19;
    strcpy(p1.end, "MG");
    p1.complemento = 26;
    p1.numero = 82;

    return 0;
}

// nao consegui ainda apenas mexer com arquivos dentro de c++
