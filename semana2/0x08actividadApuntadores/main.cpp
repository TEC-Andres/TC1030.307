#include <iostream>
#include <cstdint>
#include <cmath>
#include <string>
#include <limits>

void numeroMaximo(int &x, int &y) {
    if (x > y) {
        ++x;
    } else {
        ++y;
    }
}

void solucionDeSegundoGrado(double &a, double &b, double &c) {
    double discriminante = std::pow(b, 2) - 4*a*c;
    if (discriminante < 0) {
        std::cout << "La ecuación no tiene solución real.\n" << std::endl;
        a = b = c = std::numeric_limits<double>::quiet_NaN();
    } 
    else if (discriminante == 0) {
        double solucion = -b / (2 * a);
        std::cout << "La ecuación tiene una solución real: x = " << solucion << '\n';
        a = solucion;
        b = c = std::numeric_limits<double>::quiet_NaN();
    } else {
        double raizDiscriminante = std::sqrt(discriminante);
        double solucion1 = (-b + raizDiscriminante) / (2*a);
        double solucion2 = (-b - raizDiscriminante) / (2*a);
        a = solucion1;
        b = solucion2;
        c = std::numeric_limits<double>::quiet_NaN();
        std::cout << "La ecuación tiene dos soluciones reales: x1 = " << solucion1 << ", x2 = " << solucion2 << '\n';
    }
}

int main() {
    int a = 5, b = 10;
    std::cout << "Valor de a: " << a << ", Valor de b: " << b << '\n';
    numeroMaximo(a, b);
    std::cout << "Resultado del numero mayor incrementado: "
              << ((a > b) ? a : b) << std::endl << std::endl;

    double coefA = 1.0, coefB = 3.0, coefC = -20.0;
    std::cout << "Coeficientes de la ecuación de segundo grado: a = " << coefA 
              << ", b = " << coefB << ", c = " << coefC << std::endl;
    solucionDeSegundoGrado(coefA, coefB, coefC);
    std::cout << "Soluciones de la ecuación de segundo grado: "
              << (std::isnan(coefA) ? "" : std::to_string(coefA) + ", ") 
              << (std::isnan(coefB) ? "" : std::to_string(coefB) + ", ")
              << (std::isnan(coefC) ? "" : std::to_string(coefC)) << '\n';

    return 0;
}