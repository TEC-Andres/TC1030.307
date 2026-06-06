/**
 * @file main.cpp
 * @author Andrés Rodríguez Cantú [TEC-Andres](https://github.com/TEC-Andres)
 * @date 2026-06-05
 * @brief Programa de prueba para la clase Fraccion y sus operadores sobrecargados.
 */

#include <iostream>

#include "lib/fraccion.h"

int main() {
    Fraccion f1(1, 2);
    Fraccion f2(3, 4);
    Fraccion f3;

    std::cout << "f1: " << f1.getNumerador() << "/" << f1.getDenominador() << std::endl;
    std::cout << "f2: " << f2.getNumerador() << "/" << f2.getDenominador() << std::endl;
    std::cout << "f3 (default): " << f3.getNumerador() << "/" << f3.getDenominador() << std::endl;

    Fraccion suma = f1 + f2;
    std::cout << "Suma: " << suma.getNumerador() << "/" << suma.getDenominador() << std::endl;

    Fraccion resta = f1 - f2;
    std::cout << "Resta: " << resta.getNumerador() << "/" << resta.getDenominador() << std::endl;

    Fraccion mult = f1 * f2;
    std::cout << "Multiplicacion: " << mult.getNumerador() << "/" << mult.getDenominador() << std::endl;

    Fraccion div = f1 / f2;
    std::cout << "Division: " << div.getNumerador() << "/" << div.getDenominador() << std::endl;

    Fraccion neg = -f1;
    std::cout << "Negativo: " << neg.getNumerador() << "/" << neg.getDenominador() << std::endl;

    ++f1;
    std::cout << "Incremento pre: " << f1.getNumerador() << "/" << f1.getDenominador() << std::endl;

    f1++;
    std::cout << "Incremento post: " << f1.getNumerador() << "/" << f1.getDenominador() << std::endl;

    --f2;
    std::cout << "Decremento pre: " << f2.getNumerador() << "/" << f2.getDenominador() << std::endl;

    f2--;
    std::cout << "Decremento post: " << f2.getNumerador() << "/" << f2.getDenominador() << std::endl;

    f1 += Fraccion(1, 4);
    std::cout << "f1 += 1/4: " << f1.getNumerador() << "/" << f1.getDenominador() << std::endl;

    f1 -= Fraccion(1, 4);
    std::cout << "f1 -= 1/4: " << f1.getNumerador() << "/" << f1.getDenominador() << std::endl;

    f1 *= Fraccion(2, 3);
    std::cout << "f1 *= 2/3: " << f1.getNumerador() << "/" << f1.getDenominador() << std::endl;

    f1 /= Fraccion(3, 4);
    std::cout << "f1 /= 3/4: " << f1.getNumerador() << "/" << f1.getDenominador() << std::endl;

    return 0;
}
