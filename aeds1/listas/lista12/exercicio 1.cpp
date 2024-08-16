#include <iostream>

using namespace std;

class Televisao{

    private:
        int volume, canal;
     
    public:

    Televisao(){
        volume = 0;
        canal = 10;
    };

    void escreveinformacao(){
        cout << "volume: " << getvolume() << endl;
        cout << "canal: " << getcanal() << endl;
    }

    void aumentaVolume(){
        this -> volume = volume +1;
    }

    void diminuiVolume(){
        this -> volume = volume -1;
    }

    void mutarvolume(){
        setvolume(volume = 0);
    }

    void setvolume(int v){
        this -> volume = v;
    }

    int getvolume(){
        return volume;
    }
   
   void setcanal(int c){
        this -> canal = c;
   }

   int getcanal(){
        return canal;
   }

};

int menu(){
    int opcao; 
    puts("0- sair");
    puts("1-alterar volume");
    puts("2-alterar canal");
    puts("3-exibir informacoes");
    printf("sua opcao: ");
    scanf("%i", &opcao);
    return opcao;
}

int main(){
    
    int a, b;
    
    Televisao controle;
    int opcao;

   do{
    opcao = menu();
    switch (opcao)
    {
        case 0:
            puts("tchau");
            break;
        case 1:
            printf("\nDigite 1 para aumentar o volume e 2 para diminuir ou 3 para mutar: ");
            scanf("%d", &a);
            
            if(a == 1){
                controle.aumentaVolume();
            }
            else if(a == 2){
                controle.diminuiVolume();
            }
            else{
                controle.mutarvolume();
            }
            break;
        case 2:
            printf("Digite o canal: ");
            scanf("%d", &b);

            controle.setcanal(b);
            break;

        case 3:
            controle.escreveinformacao();

    }

   }while (opcao != 0);
  
    return 0;
}