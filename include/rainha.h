#ifndef PDS2_RAINHA_H
#define PDS2_RAINHA_H

#include "peca.h"
#include "excecoes.h"

class Rainha : public Peca{
public:
    Rainha(int x, int y);
		~Rainha();

		bool pode_mover(int x, int y) override; //add exception
		void move(int x, int y) throw (MovimentoInvalidoException);

		
};

#endif
