/**
 * @file lib/fraccion.h
 * @author Andrés Rodríguez Cantú [TEC-Andres](https://github.com/TEC-Andres)
 * @date 2026-06-05
 * @brief Declaración de la clase Fraccion y sus operadores sobrecargados.
 */

#pragma once
#include <iostream>
#include <sstream>

class Fraccion {
public:
    Fraccion(int numerador = 0, int denominador = 1);
    int getNumerador();
    void setNumerador(int numerador);
    int getDenominador();
    void setDenominador(int denominador);

    Fraccion operator-();
    Fraccion& operator++();
    Fraccion operator++(int);
    Fraccion& operator--();
    Fraccion operator--(int);
    Fraccion& operator+=(Fraccion f);
    Fraccion& operator-=(Fraccion f);
    Fraccion& operator*=(Fraccion f);
    Fraccion& operator/=(Fraccion f);

    friend Fraccion operator+(Fraccion f1, Fraccion f2);
    friend Fraccion operator-(Fraccion f1, Fraccion f2);
    friend Fraccion operator*(Fraccion f1, Fraccion f2);
    friend Fraccion operator/(Fraccion f1, Fraccion f2);

private:
    int numerador;
    int denominador;
};
