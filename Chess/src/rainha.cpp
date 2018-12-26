#include "rainha.h"

Rainha::Rainha(int x, int y) : Peca(x, y, "♛"){}

Rainha::~Rainha(){}

bool Rainha::pode_mover(int x, int y){
//A Rainha pode mover na diagonal(_x + *, _y + *)
//									  na linha(_x + *)
//										na coluna(_y + *)
	if(this->_x != x && this->_y != y){
		if((x >= 0 && x <= 7) && (y >= 0 && y <=7)){
			return true;
		}
	}//Fim Diagonal
	
	if(this->_y == y && this->_x != x){
		if(x >= 0 && x <= 7){
			return true;
		}
	}//Fim Linha

	if(this->_x == x && this->_y != y){
		if(y >= 0 && y <=7){
			return true;
		}
	}//Fim Coluna

	return false;
}

void Rainha::move(int x, int y) throw (MovimentoInvalidoException){
	if(pode_mover(x, y)){
		this->_x = x;
		this->_y = y;	
	}else{
		throw MovimentoInvalidoException();
	}
}
