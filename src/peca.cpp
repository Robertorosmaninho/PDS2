#include "peca.h"

Peca::Peca(int x, int y, std::string icon) : _x(x), _y(y), _icon(icon) {}

Peca::~Peca(){}

int Peca::get_x(){
	return this->_x;
}

int Peca::get_y(){
	return this->_y;
}

std::string Peca::get_icon(){
	return this->_icon;
}

bool Peca::pode_mover(int x, int y){
	if((x >= 0 && x <= 7) && (y >= 0 && y <=7)){
    return true;
	 }
	return false;
}
