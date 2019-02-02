#ifndef PDS2_OVERNIGHTPACKAGE_H
#define PDS2_OVERNIGHTPACKAGE_H

#include <string>
#include "package.h"

class OverNightPackage : public Package{
protected:
 unsigned int _add_cost_weight;
public:
 OverNightPackage(unsigned int weight, unsigned int cost_weight, unsigned int add_cost_weight, std::string name, std::string address);

 double calculate_cost() override;
};
#endif
