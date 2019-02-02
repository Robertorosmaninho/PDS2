#include <iostream>
#include "LISTADUPLA.h"

using namespace std;

int main(){
    ListaEncadeada lista; //chamando lista via construtor vazio
        lista.insere_elemento(1);
        lista.insere_elemento(2);
        lista.insere_elemento(3);
        lista.insere_elemento(4);
        lista.insere_elemento(3);
        lista.insere_elemento(2);
        lista.insere_elemento(1);

    if(lista.checa_palindromo()){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    lista.remover_iesimo(3);

    if(lista.checa_palindromo()){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    lista.remover_iesimo(2);
    lista.remover_iesimo(2);

    if(lista.checa_palindromo()){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    lista.insere_elemento(4);

    if(lista.checa_palindromo()){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}
