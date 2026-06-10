#include <iostream>
#include "fraccion.h"

int main() {
    try {
        std::cout << "–≈≡ Prueba de Fraccion ≡≈–" << std::endl;

        std::cout << "\n–≈≡ Constructor default (0/1) ≡≈–" << std::endl;
        Fraccion f0;
        f0.imprimir();

        std::cout << "\n–≈≡ Constructor con reduccion (2/4 -> 1/2) ≡≈–" << std::endl;
        Fraccion f1(2, 4);
        f1.imprimir();

        std::cout << "\n–≈≡ Normalizacion de signo (2/-3 -> -2/3) ≡≈–" << std::endl;
        Fraccion f_signo(2, -3);
        f_signo.imprimir();

        std::cout << "\n–≈≡ Fracciones negativas (-1/3 y 3/-4) ≡≈–" << std::endl;
        Fraccion f_neg(-1, 3);
        Fraccion f_neg2(3, -4);
        f_neg.imprimir();
        f_neg2.imprimir();

        std::cout << "\n–≈≡ Suma: 1/2 + 9/4 ≡≈–" << std::endl;
        Fraccion f2(1, 2);
        Fraccion f3(9, 4);
        f2.sumar(f3);
        f2.imprimir();

        std::cout << "\n–≈≡ Resta: 1/2 - 9/4 ≡≈–" << std::endl;
        Fraccion f4(1, 2);
        Fraccion f5(9, 4);
        f4.restar(f5);
        f4.imprimir();

        std::cout << "\n–≈≡ Multiplicacion: 1/2 * 9/4 ≡≈–" << std::endl;
        Fraccion f6(1, 2);
        Fraccion f7(9, 4);
        f6.multiplicar(f7);
        f6.imprimir();

        std::cout << "\n–≈≡ Division: 1/2 / 9/4 ≡≈–" << std::endl;
        Fraccion f8(1, 2);
        Fraccion f9(9, 4);
        f8.dividir(f9);
        f8.imprimir();

        std::cout << "\n–≈≡ imprimir con espaciado (1/2, espacios=4) ≡≈–" << std::endl;
        Fraccion f10(1, 2);
        f10.imprimir(4);

        std::cout << "\n–≈≡ imprimir decimal (1/2) ≡≈–" << std::endl;
        f10.imprimirFormaDecimal();

        std::cout << "\n–≈≡ Division por cero: 1/2 / 0/1 ≡≈–" << std::endl;
        Fraccion f11(1, 2);
        Fraccion f12(0, 1);
        f11.dividir(f12);

    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}
