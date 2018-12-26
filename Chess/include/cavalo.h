#ifndef PDS2_CAVALO_H
#define PDS2_CAVALO_H

#include "peca.h"
#include "excecoes.h"

class Cavalo : public Peca{
public:
    Cavalo(int x, int y);
    ~Cavalo();

    bool pode_mover(int x, int y) override; //add exception
    void move(int x, int y) throw (MovimentoInvalidoException);


};

#endif
