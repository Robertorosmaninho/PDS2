#include <iostream>
#include <cmath>
#include "LISTADUPLA.h"

ListaEncadeada::ListaEncadeada(){
    this->_inicio = nullptr;
    this->_fim= nullptr;
    _num_elementos_inseridos = 0;
}

void ListaEncadeada::insere_elemento(int elemento){
    node_t *novo = new node_t();

    novo->elemento = elemento;
    novo->proximo = nullptr;

    if(this->_inicio == nullptr){
        novo->anterior = nullptr;
        this->_inicio=novo;
        this->_fim=novo;
    }else{
        this->_fim->proximo = novo;
        novo->anterior = this->_fim;
        this->_fim = novo;
    }
    this->_num_elementos_inseridos++;
}

void ListaEncadeada::insere_primeiro(int elemento){
    node_t *novo = new node_t();

    novo->elemento = elemento;
    novo->anterior = nullptr;
    novo->proximo = this->_inicio;
    this->_inicio->anterior = novo;
    this->_inicio = novo;

    this->_num_elementos_inseridos++;
}

int ListaEncadeada::get_iesimo(int i){
    node_t *atual = new node_t();
    int j = 0;
    atual = this->_inicio;


    while (j < i){
        atual = atual->proximo;
        j++;
    }

    return atual->elemento;

}

void ListaEncadeada::remover_elemento(){
    node_t *atual = new node_t();

    atual = this->_fim->anterior;
    atual->proximo = nullptr;

    delete this->_fim;

    this->_fim = atual;
    this->_num_elementos_inseridos--;
}

void ListaEncadeada::remover_primeiro(){
    node_t *atual = new node_t();

    atual = this->_inicio->proximo;
    atual->anterior = nullptr;

    delete this->_inicio;

    this->_inicio = atual;
    this->_num_elementos_inseridos--;
}

void ListaEncadeada::inserir_iesimo(int elemento, int i){
    if(i >= this->_num_elementos_inseridos){
        return;
    }

    node_t *atual = new node_t();
    atual = this->_inicio;

    for(int j = 0; j < i; j++){
        atual = atual->proximo;
    }

    node_t *novo = new node_t();

    atual->anterior->proximo = novo;
    novo->anterior= atual->anterior;

    novo->elemento = elemento;

    novo->proximo = atual;
    atual->anterior = novo;

    this->_num_elementos_inseridos++;

}

void ListaEncadeada::remover_iesimo(int i){
    if(i >= this->_num_elementos_inseridos){
        return;
    }
    node_t *atual = this -> _inicio;
    for(int j = 0; j < i; j++){
        atual = atual->proximo;
    }
    if(atual->proximo != nullptr){
        atual->proximo->anterior = atual->anterior;
    }
    if(atual->anterior != nullptr){
        atual->anterior->proximo = atual->proximo;
    }
    if(i == 0){
        this->_inicio = atual->proximo;
    }
    if(i == this->_num_elementos_inseridos - 1){
        this->_fim = atual->anterior;
    }
    this->_num_elementos_inseridos--;
    delete atual;
}

int ListaEncadeada::tamanho(){
    return this->_num_elementos_inseridos;
}

void ListaEncadeada::remove_consecutivos(){
    node_t *actual = new node_t();

    actual = this->_inicio;
    for(int i = 0; i < this->_num_elementos_inseridos-1; i++){
        if(actual->elemento == actual->proximo->elemento){
            remover_iesimo(i+1);
        }
        if(actual->anterior != nullptr){
            if(actual->anterior->elemento == actual->elemento && i >=1){
                remover_iesimo(i-1);
            }
        }
        actual = actual->proximo;
    }
}

int ListaEncadeada::k_esimo(bool direcao, int k){
    node_t *atual = new node_t();
    int j;

    if(direcao){
        j = 0;
        atual = this->_inicio;
        while (j < k){
            atual = atual->proximo;
            j++;
        }
        return atual->elemento;
    }else{
            k = this->_num_elementos_inseridos - k;
            j = this->_num_elementos_inseridos;
            atual = this->_fim;
            while(j > k){
                atual = atual->anterior;
                j--;
            }
            return atual->elemento;
        }
}

bool ListaEncadeada::checa_palindromo(){
    node_t *first = new node_t();
    node_t *last = new node_t();

    first = this->_inicio;
    last = this ->_fim;

    int k = floor(_num_elementos_inseridos/2);

    for(int i = 0; i < k; i++){
        if(first->elemento != last->elemento){
            return false;
        }
        first = first->proximo;
        last = last->anterior;
    }

    return true;
}
void ListaEncadeada::imprimir(){
    node_t *atual = new node_t();
    int i = 0;

    atual = this->_inicio;

    while(i < _num_elementos_inseridos){

        std::cout << atual->elemento << " ";
        atual = atual->proximo;
        i++;
    }
    std::cout << std::endl;
}
