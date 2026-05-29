#include "maestro.h"

Maestro::Maestro() : Persona() {
    puesto = "Desconocido";
}

Maestro::Maestro(const Persona& persona, const std::string& puesto) : Persona(persona) {
    this->puesto = puesto;
}

Maestro::Maestro(const std::string& nombre, int edad, const std::string& puesto) : Persona(nombre, edad) {
    this->puesto = puesto;
}

std::string Maestro::getPuesto() const {
    return puesto;
}

void Maestro::setPuesto(const std::string& puesto) {
    this->puesto = puesto;
}

std::string Maestro::str() const {
    return Persona::str() + ", Puesto: " + puesto;
}

