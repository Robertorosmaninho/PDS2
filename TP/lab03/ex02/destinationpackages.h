#ifndef PDS2_DESTINATIONPACKAGES_H
#define PDS2_DESTINATIONPACKAGES_H

#include <string>
#include <map>
#include <vector>

#include "package.h"

class DestinationPackages{
protected:
std::map<std::string, std::vector<Package*> > _mapa;

public:
DestinationPackages();

void add_package(Package *g);
double custo_total();
double custo_total(std::string s);


};
#endif
