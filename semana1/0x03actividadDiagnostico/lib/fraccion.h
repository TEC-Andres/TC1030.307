#pragma once
#include <iostream>
#include <stdexcept>
class Fraccion {
public: 
    /* Constructor */

    Fraccion(int numerador, int denominador);
    Fraccion();
    int getNumerador();
    int getDenominador();
    void setNumerador(int num);
    void setDenominador(int den);

    /* -- Operaciones -- */

    void sumar(Fraccion f);
    void multiplicar(Fraccion f);
    void reducir();

    /* -- Misc --*/
    
    void imprimir();


private:
    int numerador;
    int denominador;
};