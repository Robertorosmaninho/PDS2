#ifndef PDS2_NODE_H
#define PDS2_NODE_H

struct node_t{
    int elemento;
    node_t *proximo;
};

class ListaSimplesmenteEncadiada{
private:
    node_t *_inicio;
    node_t *_fim;
    int _num_elementos_inseridos;
public:
    ListaSimplesmenteEncadiada();
    ~ListaSimplesmenteEncadiada();

    void inserir_elemento(int elemento);
    void remove_iesimo(int i);
    void imprimir();
};
#endif
