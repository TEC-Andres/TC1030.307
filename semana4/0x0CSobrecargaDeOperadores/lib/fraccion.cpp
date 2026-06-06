/**
 * @file lib/fraccion.cpp
 * @author Andrés Rodríguez Cantú [TEC-Andres](https://github.com/TEC-Andres)
 * @date 2026-06-05
 * @brief Implementación de la clase Fraccion y sus operadores sobrecargados.
 */

#include "fraccion.h"

Fraccion::Fraccion(int numerador, int denominador) {
    this->numerador = numerador;
    if (denominador <= 0) {
        exit(1);
    } else {
        this->denominador = denominador;
    }
}

void Fraccion::setNumerador(int numerador) {
    this->numerador = numerador;
}

int Fraccion::getNumerador() {
    return this->numerador;
}

void Fraccion::setDenominador(int denominador) {
    if (denominador <= 0) {
        exit(1);
    } else {
        this->denominador = denominador;
    }
}

int Fraccion::getDenominador() {
    return this->denominador;
}

Fraccion Fraccion::operator-() {
    return Fraccion(-this->numerador, this->denominador);
}

Fraccion& Fraccion::operator++() {
    this->numerador += this->denominador;
    return *this;
}

Fraccion Fraccion::operator++(int) {
    Fraccion temp = *this;
    this->numerador += this->denominador;
    return temp;
}

Fraccion& Fraccion::operator--() {
    this->numerador -= this->denominador;
    return *this;
}

Fraccion Fraccion::operator--(int) {
    Fraccion temp = *this;
    this->numerador -= this->denominador;
    return temp;
}

Fraccion& Fraccion::operator+=(Fraccion f) {
    int num = this->numerador * f.denominador + f.numerador * this->denominador;
    int den = this->denominador * f.denominador;
    this->numerador = num;
    this->denominador = den;
    return *this;
}

Fraccion& Fraccion::operator-=(Fraccion f) {
    int num = this->numerador * f.denominador - f.numerador * this->denominador;
    int den = this->denominador * f.denominador;
    this->numerador = num;
    this->denominador = den;
    return *this;
}

Fraccion& Fraccion::operator*=(Fraccion f) {
    this->numerador *= f.numerador;
    this->denominador *= f.denominador;
    return *this;
}

Fraccion& Fraccion::operator/=(Fraccion f) {
    this->numerador *= f.denominador;
    this->denominador *= f.numerador;
    return *this;
}

Fraccion operator+(Fraccion f1, Fraccion f2) {
    int num = f1.numerador * f2.denominador + f2.numerador * f1.denominador;
    int den = f1.denominador * f2.denominador;
    return Fraccion(num, den);
}

Fraccion operator-(Fraccion f1, Fraccion f2) {
    int num = f1.numerador * f2.denominador - f2.numerador * f1.denominador;
    int den = f1.denominador * f2.denominador;
    return Fraccion(num, den);
}

Fraccion operator*(Fraccion f1, Fraccion f2) {
    return Fraccion(f1.numerador * f2.numerador, f1.denominador * f2.denominador);
}

Fraccion operator/(Fraccion f1, Fraccion f2) {
    return Fraccion(f1.numerador * f2.denominador, f1.denominador * f2.numerador);
}
