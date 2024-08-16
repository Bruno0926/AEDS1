#include <iostream>
using namespace std;

const int MAX = 5;
int tam = 0;
class Pessoa{

    private:
        string nome;
        int idade;
    public:
        Pessoa(){};

    void setNome(string nome){
        this -> nome = nome;
    }

    void setIdade(int idade){
        this -> idade = idade;
    }
    string getNome(){
        return this -> nome;
    }
    int getIdade(){
        return this -> idade;
    }
    bool ehMaior(){
        if(idade > 18){
            return true;
        }else{
            return false;
        };
    }
    string maisVelho(Pessoa* pessoa[]){
        int idade = 0;
        for(int i = 0; i < MAX; i++){
            if(pessoa[i] -> idade > idade){
                idade = pessoa[i] -> idade;
                return pessoa[i] -> nome;
            }
        }
    }

    void lerPessoa(){
        printf("\n Digite o seu nome: ");
        cin >> nome;
        printf("\n Digite a sua idade: ");
        cin >> idade;
    }

};

class Aluno: public Pessoa{
    private:
        int matricula;

    public:
    Aluno(){
        
    };
    
    void lerAluno(){
        lerPessoa();
        lerMatricula();
    }

    void lerMatricula(){
        printf("\n Digite sua matricula: ");
        cin >> matricula;
    }

    int getMatricula(){
        return this -> matricula;
    }

    void escreveAluno(){
        printf("\n nome: ", getNome());
        printf("\n idade: ", getIdade());
        printf("\n matricula", getMatricula());

    }
};

int menu(){
    int opcao; 
    puts("0- sair");
    puts("1-cadastrar aluno");
    puts("2-alunos maiores de idade");
    puts("3-aluno mais velho");
    printf("sua opcao: ");
    scanf("%i", &opcao);
    return opcao;
}

int main(){
    Aluno* aluno[MAX];
    int opcao;

    do{
        opcao = menu();
        switch (opcao)
        {
        case 0:
            puts("tchau");
            break;
        case 1:
            aluno[tam] = new Aluno();
            if (tam < MAX)
            {
                aluno[tam] -> lerAluno();
                tam++;
            };
            break;

        case 2:
            string meu;
            printf("\n Digite o nome do aluno que quer verificar: ");
            scanf("%s", &meu);
            
            for(int i = 0; i < tam; i++){
                if(aluno[i] -> getNome() == meu){
                    if(aluno[i] -> ehMaior() == true){
                        aluno[i] -> escreveAluno();
                    }
                }
            } 
            break;
        }
    }while(opcao != 0);

    return 0;
}

//  consegui fazer o programa funcionar até o case 2. A partir do case 3 estava dando um erro que eu não sei qual é.
//  case 3:
//             for(int i = 0; i < tam, i++){
//                aluno[i] -> maisVelho(aluno);
//             }