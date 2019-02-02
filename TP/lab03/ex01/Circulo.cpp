#define PI 3.1415926535897
#include "circulo.h"

Circulo::Circulo(std::string cor, double raio, std::string nome){ 
this->_raio = raio;
this->_cor = cor; 
this->_raio = raio;
}

double Circulo::get_raio(){
 return this->_raio;
}

std::string Circulo::get_nome(){
 return this->_nome;
}

std::string Circulo::get_cor(){
 return this->_cor;
}

double Circulo::get_area(){
 double area = this->_raio*this->_raio*PI;
 return area;
}

double Circulo::get_perimetro(){
 return 4*this->_raio;
}
