#include <iostream>

using namespace std;

class Empresa{

    private:
    string nome, endereco, cidade, estado;
    int cep, telefone;

    public:

    Empresa(){}

    void setnome(string n){
        this -> nome = n;
    }
    string getnome(){
        return this -> nome;
    }

    void setendereco(string e){
        this -> endereco = e;
    }
    string getendereco(){
        return this -> endereco;
    }

    void setcidade(string c){
        this -> cidade = c;
    }
    string getcidade(){
        return this -> cidade;
    }
    
    void setestado(string es){
        this -> estado = es;
    }
    string getestado(){
        return this -> estado;
    }

    void setcep(int ce){
        this -> cep = ce;
    }
    int getcep(){
        return this -> cep;
    }

    void settelefone(int t){
        this -> telefone = t;
    }
    int gettelefone(){
        return this -> telefone;
    }

    void leEmpresa(){
        cout << "Nome:";
        cin >> nome;
        setnome(nome);
        cout << "endereco:";
        cin >> endereco;
        setendereco(endereco);
        cout << "cidade:";
        cin >> cidade;
        setcidade(cidade);
        cout << "estado:";
        cin >> estado;
        setestado(estado);
        cout << "cep:";
        cin >> cep;
        setcep(cep);
        cout << "telefone:";
        cin >> telefone;
        settelefone(telefone);
    }
    void escreveEmpresa(){
        cout << "nome:" << getnome() << endl;
        cout << "endereco:" << getendereco() << endl;
        cout << "cidade:" << getcidade() << endl;
        cout << "estado:" << getestado() << endl;
        cout << "cep:" << getcep() << endl;
        cout << "telefone:" << gettelefone() << endl;
    }
};

int main(){
    Empresa* bar[5];

    for (int i = 0; i < 5; i++)
    {
        bar[i]->leEmpresa();
        bar[i]->escreveEmpresa();
    }
    
return 0;
}

// as vezes roda o programa inteiro e as vezes roda apenas o inicio do "cadastro". Não consegui identificar o motivo.