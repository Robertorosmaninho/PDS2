#include <iostream>
#include <string>

#include "package.h"
#include "twodaypackage.h"
#include "overnightpackage.h"
#include "destinationpackages.h"

int main(){

Package My(23, 5, "Iphone", "9805 Swapps Ln");

std::cout << My.calculate_cost() << std::endl;

TwoDayPackage pacote = TwoDayPackage(2, 7, 3, "Josias", "Manaus");

std::cout << pacote.calculate_cost() << std::endl;

OverNightPackage pacote1 = OverNightPackage(2, 5, 2, "Maria", "Rio");

std::cout << pacote1.calculate_cost() << std::endl;

return 0;
}
