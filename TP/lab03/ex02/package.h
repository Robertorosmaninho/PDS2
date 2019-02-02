#ifndef PDS_PACKAGE_H
#define PDS_PACKAGE_H

#include <string>

class Package{
protected:
 unsigned int _weight;
 unsigned int _cost_weight;
 std::string _name;
 std::string _address;
public:
 Package(unsigned int weight, unsigned int cost_weight, std::string name, std::string address);
 virtual ~Package(); 
 virtual double calculate_cost();
 unsigned int get_peso();
 unsigned int get_custo_por_quilo();
 std::string get_name();
};
#endif
