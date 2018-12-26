#include "cavalo.h"

Cavalo::Cavalo(int x, int y) : Peca(x, y, "♞"){}

Cavalo::~Cavalo(){}

bool Cavalo::pode_mover(int x, int y){
//O Cavalo só pode mover em L

	int temp = x - this->_x;
	int temp2 = y - this->_y;
	
	if(this->_x == x || this->_y == y){
		return false;
	}

	if(temp == 2 || temp == -2){
		if(temp2 == 1 || temp2 == -1){
			return true;
		}
	}

	if (temp == 1 || temp == -1){
		if(temp2 == 2 || temp2 == -2){
			return true;
		}
	}
	
	return false;
}

void Cavalo::move(int x, int y) throw (MovimentoInvalidoException){
  if(pode_mover(x, y)){
    this->_x = x;
    this->_y = y;
  }else{
    throw MovimentoInvalidoException();
  }
}

