#include "bispo.h"

Bispo::Bispo(int x, int y) : Peca(x, y, "♝"){}

Bispo::~Bispo(){}

bool Bispo::pode_mover(int x, int y){
//A Bispo pode mover na diagonal(_x + *, _y + *)
//                    na linha(_x + *)
//                    na coluna(_y + *)
	int temp = x - this->_x;
	int temp2 = y - this->_y;
	
	if(temp != temp2){
		return false;
	}

  if(this->_x != x && this->_y != y){
    if((x >= 0 && x <= 7) && (y >= 0 && y <=7)){	
			return true;
    }
  }//Fim Diagonal
	
	return false;
}
void Bispo::move(int x, int y) throw (MovimentoInvalidoException){
  if(pode_mover(x, y)){
    this->_x = x;
    this->_y = y;
  }else{
    throw MovimentoInvalidoException();
  }
}
