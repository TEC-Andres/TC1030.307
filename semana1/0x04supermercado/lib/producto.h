#pragma once
#include <iostream>
#include <string>

class Producto {
public:
    Producto(int codigo, std::string nombre);
    Producto();

    int getCodigo();
    void setCodigo(int id);
    
    std::string getNombre();
    void setNombre(std::string nombre);

    void muestra();
    void escanear();

private:
    int id;
    double price;
    std::string name;
};