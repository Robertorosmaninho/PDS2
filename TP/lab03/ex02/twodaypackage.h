#ifndef PDS2_TWODAYPACKAGE_H
#define PDS2_TWODAYPACKAGE_H

#include <string>
#include "package.h"

class TwoDayPackage : public Package{
protected:
 unsigned int _freight;
public:
 TwoDayPackage(unsigned int weight, unsigned int cost_weight, unsigned int freight, std::string name, std::string address);

  double calculate_cost()  override;

};
#endif
