#include <iostream>

#include "lib/complejo.h"

int main() {
    Complejo c1(3, 4);
    std::cout << "Parte real: " << c1.getReal() << std::endl;
    std::cout << "Parte imaginaria: " << c1.getImag() << std::endl;

    Complejo c2(1, 2);
    Complejo suma = c1 + c2;
    Complejo resta = c1 - c2;
    std::cout << "Suma: " << suma.getReal() << " + " << suma.getImag() << "i" << std::endl;
    std::cout << "Resta: " << resta.getReal() << " + " << resta.getImag() << "i" << std::endl;

    return 0;
}