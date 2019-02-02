#include <iostream>
#include "forma.h"
#include "Forma2D.h"
#include "circulo.h"


int main(){
 Circulo c("Amarelo",4);

 std::cout << c.get_raio() << std::endl;
 std::cout << c.get_area() << std::endl;

return 0;
}
