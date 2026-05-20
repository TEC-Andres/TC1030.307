#pragma once
#include "producto.h"

class ComidaEmpaquetada : public Producto {
public:
    ComidaEmpaquetada(int id, std::string nombre, int cantidad);
    ComidaEmpaquetada();

    int getCantidad();
    void setCantidad(int cantidad);

    void muestra();
    void escanear();
private:
    int cantidadUnidad;
};