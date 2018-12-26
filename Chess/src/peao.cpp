#include "peao.h"

Peao::Peao(int x, int y) : Peca(x, y, "♟"), _rodada(1){}

Peao::~Peao(){}

bool Peao::pode_mover(int x, int y){
//A Peao pode mover na coluna(_y + *)

	int temp = y - this->_y;
	
	if(this->_rodada != 1 && temp == 2){
		return false;
	}
	
	if(x != this->_x || temp > 2){
		return false;
	}

  if(this->_x == x && this->_y != y){
    if(y >= 0 && y <=7){
      return true;
    }
  }//Fim Coluna

  return false;
}


void Peao::move(int x, int y) throw (MovimentoInvalidoException){
  if(pode_mover(x, y)){
    this->_x = x;
    this->_y = y;
  }else{
    throw MovimentoInvalidoException();
  }
}
