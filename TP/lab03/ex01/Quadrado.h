#ifndef PDS2_QUADRADO_H
#define PDS2_QUADRADO_H

#include "Forma2D.h"


class Quadrado{
private:
 double _lado;
public:
 Quadrado(double _lado);
 ~Quadrado();

 double get_lado();
}
