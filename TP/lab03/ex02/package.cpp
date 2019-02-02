#include "package.h"
#include <string>

Package::Package(unsigned int weight, unsigned int cost_weight, std::string name, std::string address):
  _weight(weight), _cost_weight(cost_weight), _name(name), _address(address) {}
  
Package::~Package(){} 

double Package::calculate_cost(){
 return  this->_weight * this->_cost_weight;
}
 unsigned int Package::get_peso(){
     return _weight;
 }
 
 unsigned int Package::get_custo_por_quilo(){
    return this->_cost_weight;
}

std::string Package::get_name(){
    return this->_name;
}
