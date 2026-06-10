#pragma once
#include <iostream>
#include <stdexcept>
class Fraccion {
public:
    /* Constructor */
    Fraccion(int numerador = 0, int denominador = 1);

    /* -- Operaciones -- */
    void sumar(Fraccion f);
    void restar(Fraccion f);
    void multiplicar(Fraccion f);
    void dividir(Fraccion f);

    /* -- Impresión -- */
    void imprimir();
    void imprimir(int espacios);
    void imprimirFormaMixta();
    void imprimirFormaDecimal();

private:
    int numerador;
    int denominador;
    void reducir();
};