#include "fraccion.h"

Fraccion::Fraccion(int num, int den) {
    if (den == 0) {
        throw std::runtime_error("El denominador no puede ser cero.");
    }
    numerador = num;
    denominador = den;
    reducir();
}

void Fraccion::imprimir() {
    std::cout << numerador << "/" << denominador << std::endl;
}

void Fraccion::imprimir(int espacios) {
    std::cout.width(espacios);
    std::cout << std::right << numerador;
    std::cout << "/";
    std::cout.width(espacios);
    std::cout << std::right << denominador << std::endl;
}

void Fraccion::imprimirFormaMixta() {
    int entero = numerador / denominador;
    int resto = std::abs(numerador % denominador);
    if (entero != 0) {
        std::cout << entero << " ";
    }
    if (resto != 0) {
        std::cout << resto << "/" << denominador;
    }
    std::cout << std::endl;
}

void Fraccion::imprimirFormaDecimal() {
    std::cout << static_cast<double>(numerador) / denominador << std::endl;
}

void Fraccion::sumar(Fraccion f) {
    numerador = numerador * f.denominador + f.numerador * denominador;
    denominador *= f.denominador;
    reducir();
}

void Fraccion::restar(Fraccion f) {
    numerador = numerador * f.denominador - f.numerador * denominador;
    denominador *= f.denominador;
    reducir();
}

void Fraccion::multiplicar(Fraccion f) {
    numerador *= f.numerador;
    denominador *= f.denominador;
    reducir();
}

void Fraccion::dividir(Fraccion f) {
    if (f.numerador == 0) {
        throw std::runtime_error("No se puede dividir por una fracción con numerador cero.");
    }
    numerador *= f.denominador;
    denominador *= f.numerador;
    reducir();
}

void Fraccion::reducir() {
    if (denominador < 0) {
        numerador = -numerador;
        denominador = -denominador;
    }
    if (numerador == 0) {
        denominador = 1;
        return;
    }
    int a = std::abs(numerador);
    int b = std::abs(denominador);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    numerador /= a;
    denominador /= a;
}