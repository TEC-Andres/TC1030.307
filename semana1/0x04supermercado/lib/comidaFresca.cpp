#include "comidaFresca.h"

ComidaFresca::ComidaFresca(int id, std::string nombre, double precio, double peso) : Producto(id, nombre), precio(precio), peso(peso) {
}

ComidaFresca::ComidaFresca() : Producto(1, "Manzana"), precio(0.0), peso(0.0) {}

double ComidaFresca::getPrecio() {
    return precio;
}

void ComidaFresca::setPrecio(double precio) {
    this->precio = precio;
}

double ComidaFresca::getPeso() {
    return peso;
}

void ComidaFresca::setPeso(double peso) {
    this->peso = peso;
}

void ComidaFresca::muestra() {
    Producto::muestra();
    std::cout << "Precio por kg: " << std::fixed << std::setprecision(2) << precio << std::endl;
    std::cout << "Peso: (en kg): " << std::fixed << std::setprecision(2) << peso << std::endl;
}

void ComidaFresca::escanear() {
    Producto::escanear();
    std::cout << "Introduce el precio del producto" << std::endl;
    std::cin >> precio;

    ComidaFresca::setPrecio(precio);

    std::cin.sync();
    std::cin.clear();
}