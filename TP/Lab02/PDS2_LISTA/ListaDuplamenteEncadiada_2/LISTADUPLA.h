#ifndef PDS2_LISTADUPLA_H
#define PDS2_LISTADUPLA_H

struct node_t{
    int elemento;
    node_t *anterior;
    node_t *proximo;
};

class ListaEncadeada{
private:
    node_t *_inicio;
    node_t *_fim;
    int _num_elementos_inseridos;
public:
    ListaEncadeada();

    void insere_elemento(int elemento); // Insere um elemento no fim da lista.
    void insere_primeiro(int elemento); // Insere um elemento no inicio da lista.
    int get_iesimo(int i); // Retorna um elemento na posição i.
    void remover_elemento(); // Remove um elemento no fim da lista.
    void remover_primeiro(); // Remove o primeiro elemento da lista.
    void inserir_iesimo(int elemento, int i); // Insere um elemento na posicão i.
    void remover_iesimo(int i); // Remove um elemento na posição i
    int tamanho(); //Retorna o tamanho da lista.
    void remove_consecutivos(); //Remove elementos consecutivos na lista
    int k_esimo(bool direcao, int k); //Retorna o K_ésimo elemento e um determinado sentido.
    bool checa_palindromo();//Checa se os elementos da lista formam um palindromo
    void imprimir();
};
#endif
