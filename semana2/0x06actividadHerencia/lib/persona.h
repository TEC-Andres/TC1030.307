#pragma once
#include <string>

class Persona {
public:
    Persona();
    Persona(const std::string& nombre, int edad);
    std::string getNombre() const;
    int getEdad() const;
    void setNombre(const std::string& nombre);
    void setEdad(int edad);
    std::string str() const;

private:
    std::string nombre;
    int edad;
};