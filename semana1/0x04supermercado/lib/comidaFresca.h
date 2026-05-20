#pragma once
#include <iomanip>
#include "producto.h"

class ComidaFresca : public Producto {
public:
    ComidaFresca(int id, std::string nombre, double precio, double peso);
    ComidaFresca();

    double getPrecio();
    void setPrecio(double precio);

    double getPeso();
    void setPeso(double peso);

    void muestra();
    void escanear();

private: 
    double precio;
    double peso;
};