#ifndef PDS2_REI_H
#define PDS2_REI_H

#include "peca.h"
#include "excecoes.h"

class Rei : public Peca{
public:
    Rei(int x, int y);
    ~Rei();

    bool pode_mover(int x, int y) override; //add exception
    void move(int x, int y) throw (MovimentoInvalidoException);

};

#endif
