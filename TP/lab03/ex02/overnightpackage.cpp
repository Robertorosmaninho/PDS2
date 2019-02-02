#include <string>
#include "overnightpackage.h"

OverNightPackage::OverNightPackage(unsigned int weight, unsigned int cost_weight, unsigned int add_cost_weight, std::string name, std::string address) : Package(weight, cost_weight, name, address), _add_cost_weight(add_cost_weight) {};

double OverNightPackage::calculate_cost(){
 double cost = this->_weight * (this->_cost_weight + this->_add_cost_weight);
 return cost;
}
