#ifndef PDS2_BISPO_H
#define PDS2_BISPO_H

#include "peca.h"
#include "excecoes.h"

class Bispo : public Peca{
public:
	Bispo(int x, int y);	
	~Bispo();

	bool pode_mover(int x, int y) override; 
  void move(int x, int y) throw (MovimentoInvalidoException);
};


#endif
