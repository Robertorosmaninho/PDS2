#ifndef PDS2_PEAO_H
#define PDS2_PEAO_H

#include "peca.h"
#include "excecoes.h"

class Peao : public Peca{
protected:
		int _rodada;
public:
    Peao(int x, int y);
    ~Peao();

    bool pode_mover(int x, int y) override; //add exception
    void move(int x, int y) throw (MovimentoInvalidoException);


};

#endif
