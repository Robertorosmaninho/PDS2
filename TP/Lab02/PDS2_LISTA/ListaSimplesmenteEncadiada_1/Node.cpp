#include <iostream>
#include "Node.h"

ListaSimplesmenteEncadiada::ListaSimplesmenteEncadiada(){
    this->_inicio = nullptr;
    this->_fim = nullptr;
    this->_num_elementos_inseridos = 0;
}

void ListaSimplesmenteEncadiada::inserir_elemento(int elemento){
    node_t *novo = new node_t();
    novo->elemento = elemento;
    novo->proximo = nullptr;

    if(this->_inicio == nullptr){
        this->_inicio = novo;
        this->_fim = novo;
    }else{
        this->_fim->proximo = novo;
        this->fim = novo;
    }
    this->_num_elementos_inseridos++;
}

void ListaSimplesmenteEncadiada::remove_iesimo(int i){
    if(i >= this->_num_elementos_inseridos){
        return;
    }
    node_t *atual = this->_inicio;
    node_t *anterior = nullptr;

    for(int j = 0; j < i; j++){
        anterior = atual;
        atual = atual->proximo;
    }

    if(anterior != nullptr){
        anterior->proximo = atual->proximo;
    }
    if(i == 0){
        this->_inicio = atual->proximo;
    }
    if(i == this->_num_elementos_inseridos - 1){
        this->_fim = anterior;
    }
    this->_num_elementos_inseridos--;
    delete atual;
}

ListaSimplesmenteEncadiada::~ListaSimplesmenteEncadiada(){
    node_t *anterior = nullptr;
    node_t *proximo = this->_inicio;

    while (proximo != nullptr){
        anterior = proximo;
        proximo = proximo->proximo;
        delete anterior;
    }
}
