#include "estudiante.h"

Estudiante::Estudiante() : Persona() {
    carrera = "Desconocida";
}

Estudiante::Estudiante(const Persona& persona, const std::string& carrera) : Persona(persona) {
    this->carrera = carrera;
}

Estudiante::Estudiante(const std::string& nombre, int edad, const std::string& carrera) : Persona(nombre, edad) {
    this->carrera = carrera;
}

std::string Estudiante::getCarrera() const {
    return carrera;
}

void Estudiante::setCarrera(const std::string& carrera) {
    this->carrera = carrera;
}

std::string Estudiante::str() const {
    return Persona::str() + ", Carrera: " + carrera;
}