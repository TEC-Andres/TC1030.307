#include "persona.h"
#include "estudiante.h"
#include "maestro.h"
#include <iostream>

int main() {
    Estudiante chabelo("Chabelo", 85, "Entretenimiento");
    Maestro maestro("Jirafales", 50, "Profesor");
    Persona chano("Chano", 80);

    std::cout << chabelo.str() << std::endl;
    std::cout << maestro.str() << std::endl;
    std::cout << chano.str() << std::endl;

    chabelo.setNombre("Chabelo Villanueva");
    chabelo.setEdad(86);

    std::cout << chabelo.str() << std::endl;

    return 0;
}