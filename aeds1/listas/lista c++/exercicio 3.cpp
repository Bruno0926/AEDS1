#include <iostream>
using namespace std;

int main (){

    int a,b,next,n,m;
    cout << "Quantas vezes queres ver o fibonnaci?";
    cin >> m;

    if (m>=3){
    a=0;
    b=1;
    next = a+b;
    cout << 1 << "," ;
    cout << 1 << "," ;
    n=3;
    }
    else{
        cout << "O numero tem que ser maior ou igual a 3" << endl;
        return 0;
    }

    while (n<m){
        a=b;
        b= next;
        next = a+b;
        cout << next << "," ;
        n++;
    }

    if (n=m){
        a=b;
        b=next;
        next = a+b;
        cout << next;
    }

}