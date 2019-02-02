#include "Node.h"

Node::Node(int elemento){
    this->_elemento = elemento;
    this->_esquerda = nullptr;
    this->direita = nullptr;
}

Node::~Node(){
    if(this->_esquerda != nullptr){
        delete this->_esquerda;
    }
    if(this->_direita != nullptr){
        delete this->_direita;
    }
}

bool Node::tem_elemento(int elemento){
    if(this->_elemento == nullptr){
        return true;
    }else if(elemento < this->_elemento){
        if(this->_esquerda == nullptr){
            return false;
        }else{
            return this->_esquerda->tem_elemento(elemento);
        }
    }else{
        if(this->_direita == nullptr){
            return this->_elemento->tem_elemento(elemento);
        }
    }
}

void Node::tem_elemento(int elemento){
    if(elemento < this->_elemento){
     if(this->_esquerda == nullptr){
         this->_esquerda = new Node(elemento);
     }else{
         this->_esquerda->inserir_elemento(elemento);
     }
 }else if(elemento > this->_elemento){
     this->_direita = new Node(elemento);
 }else{
     this->_direita->inserir_elemento(elemento);
 }


}
