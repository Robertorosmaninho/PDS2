#ifndef PDS2_CIRCULO_H
#define PDS2_CIRCULO_H

#include <string>
#include "Forma2D.h"

class Circulo : public Forma2D{
private:
 std::string _cor;
 std::string _nome;
  double _raio;
public:
 Circulo(std::string cor, double raio, std::string nome ="Circulo");
// ~Circulo();

 double get_raio();
 virtual std::string get_cor();
 virtual std::string get_nome();
 virtual double get_area();
 virtual double get_perimetro();

};

#endif
