#pragma once
#include <vector>
#include <iostream>
#include "fraccion.h"

/* Macros para hacer el código mas legible */

#define sumarFraccion(x,y) x.sumar(y)
#define multiplicarFraccion(x,y) x.multiplicar(y)

class matFrac {
public:
    matFrac(int filas, int columnas);
    void setFraccion(int fila, int columna, int numerador, int denominador);
    Fraccion getValor(int fila, int columna);
    int getFila();
    int getColumna();
    void imprimir();

    void sumar(matFrac m);


private:
    int filas;
    int columnas;
    std::vector<Fraccion> matriz;
};