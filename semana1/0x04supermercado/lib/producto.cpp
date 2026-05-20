#include "producto.h"

Producto::Producto(int codigo, std::string nombre) : id(codigo), name(nombre) {
}
Producto::Producto() : id(0), name("manzana") {}

int Producto::getCodigo() {
    return id;
}

void Producto::setCodigo(int codigo) {
    id = codigo;
}


std::string Producto::getNombre() {
    return name;
}

void Producto::setNombre(std::string nombre) {
    name = nombre;
}

void Producto::muestra() {
    std::cout << "------------------------------" << std::endl;
    std::cout << "Id \t " << Producto::getCodigo() << " \t Producto: " << Producto::getNombre() << std::endl;
    std::cout << "------------------------------" << std::endl;
}

void Producto::escanear() {
    std::cout << "Introduce el nombre del producto" << std::endl;
    std::cin >> name;
    std::cout << "Ahora, introduce el ID del producto" << std::endl;
    std::cin >> id;

    Producto::setCodigo(id);
    Producto::setNombre(name);

    std::cin.sync();
    std::cin.clear();
}