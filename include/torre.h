#ifndef PDS2_TORRE_H
#define PDS2_TORRE_H

#include "peca.h"
#include "excecoes.h"

class Torre : public Peca{
public:
    Torre(int x, int y);
    ~Torre();

    bool pode_mover(int x, int y) override; //add exception
    void move(int x, int y) throw (MovimentoInvalidoException);


};

#endif
