#include <string>
#include "twodaypackage.h"


TwoDayPackage::TwoDayPackage(unsigned int weight, unsigned int cost_weight, unsigned int freight, std::string name, std::string address):
Package(weight, cost_weight, name, address), _freight(freight) {};

double TwoDayPackage::calculate_cost(){
 double cost = this->_weight * this->_cost_weight + this->_freight;
return cost;
}
