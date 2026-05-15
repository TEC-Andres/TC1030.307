#include "fraccion.h"

Fraccion::Fraccion(int num, int den) : numerador(num), denominador(den) {
    if (denominador == 0) {
        throw std::invalid_argument("El denominador no puede ser cero.");
    }
}

Fraccion::Fraccion() : numerador(0), denominador(1) {}

int Fraccion::getNumerador() {
    return numerador;
}

int Fraccion::getDenominador() {
    return denominador;
}

void Fraccion::setNumerador(int num) {
    numerador = num;
}

void Fraccion::setDenominador(int den) {
    if (den == 0) {
        throw std::invalid_argument("El denominador no puede ser cero.");
    }
    denominador = den;
}

void Fraccion::imprimir() {
    std::cout << numerador << "/" << denominador << std::endl;
}

void Fraccion::sumar(Fraccion f) {
    int num = numerador * f.getDenominador() + f.getNumerador() * denominador;
    int den = denominador * f.getDenominador();
    numerador = num;
    denominador = den;
    reducir();
}

void Fraccion::multiplicar(Fraccion f) {
    int num = numerador * f.getNumerador();
    int den = denominador * f.getDenominador();
    numerador = num;
    denominador = den;
    reducir();
}

void Fraccion::reducir() {
    int a = numerador;
    int b = denominador;
    if (a == 0) {
        denominador = 1;
        return;
    }
    a = std::abs(a);
    b = std::abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    numerador /= a;
    denominador /= a;
}