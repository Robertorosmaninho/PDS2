#include <iostream>
#include "peca.h"
#include "rainha.h"

int main() {
		Peca *rainha = new Rainha(0,0);
		std::cout << rainha->get_icon() << std::endl;
    return 0;
}

