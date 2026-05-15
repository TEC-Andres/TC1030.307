#include "matFrac.h"

matFrac::matFrac(int filas, int columnas) : filas(filas), columnas(columnas) {
    matriz = std::vector<Fraccion>(filas * columnas);
}

void matFrac::setFraccion(int fila, int columna, int numerador, int denominador) {
    if (fila < 0 || fila >= filas || columna < 0 || columna >= columnas) {
        throw std::out_of_range("Índice fuera de rango.");
    }
    matriz[fila * columnas + columna] = Fraccion(numerador, denominador);
}

Fraccion matFrac::getValor(int fila, int columna) {
    if (fila < 0 || fila >= filas || columna < 0 || columna >= columnas) {
        throw std::out_of_range("Índice fuera de rango.");
    }
    return matriz[fila * columnas + columna];
}

int matFrac::getFila() {
    return filas;
}

int matFrac::getColumna() {
    return columnas;
}

void matFrac::imprimir() {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            std::cout << matriz[i * columnas + j].getNumerador() << "/" << matriz[i * columnas + j].getDenominador();
            if (j < columnas - 1) std::cout << "\t\t";
        }
        std::cout << std::endl;
    }
}

void matFrac::sumar(matFrac m) {
    if (filas != m.getFila() || columnas != m.getColumna()) {
        throw std::invalid_argument("Operación imposible. Las matrices deben ser de las mismas dimensiones para poder sumarlas.");
    }
    for (int i=0; i<filas; i++) {
        for (int j=0; j<columnas; j++) {
            sumarFraccion(matriz[i * columnas + j], m.getValor(i, j));
        }
    }

    // Print de A+B = resultado
    std::cout << "A + B = " << std::endl;
    imprimir();
}

