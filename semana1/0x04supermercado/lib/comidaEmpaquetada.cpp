#include "comidaEmpaquetada.h"

ComidaEmpaquetada::ComidaEmpaquetada(int id, std::string nombre, int cantidad) : Producto(id, nombre), cantidadUnidad(cantidad) {
}

ComidaEmpaquetada::ComidaEmpaquetada() : Producto(1, "Manzana"), cantidadUnidad(0) {}

int ComidaEmpaquetada::getCantidad() {
    return cantidadUnidad;
}

void ComidaEmpaquetada::setCantidad(int cantidad) {
    cantidadUnidad = cantidad;
}

void ComidaEmpaquetada::muestra() {
    Producto::muestra();
    std::cout << "Cantidad: " << cantidadUnidad << std::endl;
}

void ComidaEmpaquetada::escanear() {
    Producto::escanear();
    std::cout << "Introduce la cantidad de unidades" << std::endl;
    std::cin >> cantidadUnidad;

    ComidaEmpaquetada::setCantidad(cantidadUnidad);

    std::cin.sync();
    std::cin.clear();
}