#pragma once 
#include "fraccion.h"
#include "matFrac.h"
#include <iostream>
#include <fstream>
#include <string>

class RecuperadorDeValores {
public:
    std::tuple<matFrac, matFrac> recuperarValorMatFrac(std::string rutaMatrizA, std::string rutaMatrizB);
    void setRutaMatrizA(std::string ruta);
    void setRutaMatrizB(std::string ruta);
    void parserMatriz(matFrac& m, std::string ruta);

private:
    std::string rutaMatrizA;
    std::string rutaMatrizB;
};