#include <string>
#include <map>
#include <vector>
#include "destinationpackages.h"


DestinationPackages::DestinationPackages() {};

void DestinationPackages::add_package(Package *g){
 std::string name = g->get_name();
 this->_mapa.insert(_mapa.begin(), _mapa.find(name));
 this->_mapa[name] = 23;;
}
