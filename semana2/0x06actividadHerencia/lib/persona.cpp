#include "persona.h"

Persona::Persona() {
    nombre = "Chilindrina";
    edad = 0;
}

Persona::Persona(const std::string& nombre, int edad) {
    this->nombre = nombre;
    this->edad = edad;
}

std::string Persona::getNombre() const {
    return nombre;
}

int Persona::getEdad() const {
    return edad;
}

void Persona::setNombre(const std::string& nombre) {
    this->nombre = nombre;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}

std::string Persona::str() const {
    return "Nombre: " + nombre + ", Edad: " + std::to_string(edad);
}