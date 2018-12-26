#include "rei.h"

Rei::Rei(int x, int y) : Peca(x, y, "♔"){}


Rei::~Rei(){}


bool Rei::pode_mover(int x, int y){
//A Rainha pode mover 1 casa na diagonal(_x + *, _y + *)
//                    na linha(_x + *)
//                    na coluna(_y + *)

	if( x == this->_x || x == this->_x - 1 || x == this->_x + 1){
		if( y == this->_y || y == this->_y - 1 || y == this->_y + 1){
			//Movimento Válido
		}else{
		return false;
		}
	}else{
		return false;
	}//Refatorar Depois

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

void Rei::move(int x, int y) throw (MovimentoInvalidoException){
  if(pode_mover(x, y)){
    this->_x = x;
    this->_y = y;
  }else{
    throw MovimentoInvalidoException();
  }
} 
