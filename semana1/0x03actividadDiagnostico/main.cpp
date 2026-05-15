#include <iostream>
#include <vector>
#include "fraccion.h"
#include "matFrac.h"
#include "recuperadorDeValores.h"

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Uso: " << argv[0] << " <ruta_matriz_A> <ruta_matriz_B>" << std::endl;
        return 1;
    }

    RecuperadorDeValores recuperador;
    recuperador.setRutaMatrizA(argv[1]);
    recuperador.setRutaMatrizB(argv[2]);

    try {
        auto [matrizA, matrizB] = recuperador.recuperarValorMatFrac(argv[1], argv[2]);
        std::cout << "Matriz A:" << std::endl;
        matrizA.imprimir();
        std::cout << "Matriz B:" << std::endl;
        matrizB.imprimir();

        matrizA.sumar(matrizB);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}