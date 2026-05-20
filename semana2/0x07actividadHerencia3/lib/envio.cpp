#include "envio.h"

Envio::Envio(const std::string& nombre, const std::string& direccion, const std::string& ciudad, const std::string& estado, uint32_t codigoPostalRemitente, uint32_t codigoPostalDestinatario) {
    this->nombre = nombre;
    this->direccion = direccion;
    this->ciudad = ciudad;
    this->estado = estado;
    this->codigoPostalRemitente = codigoPostalRemitente;
    this->codigoPostalDestinatario = codigoPostalDestinatario;
}

Envio::Envio() {
    this->nombre = "";
    this->direccion = "";
    this->ciudad = "";
    this->estado = "";
    this->codigoPostalRemitente = 0;
    this->codigoPostalDestinatario = 0;
}

std::string Envio::getNombre() const {
    return nombre;
}

void Envio::setNombre(const std::string& nombre) {
    this->nombre = nombre;
}

std::string Envio::getDireccion() const {
    return direccion;
}

void Envio::setDireccion(const std::string& direccion) {
    this->direccion = direccion;
}

std::string Envio::getCiudad() const {
    return ciudad;
}

void Envio::setCiudad(const std::string& ciudad) {
    this->ciudad = ciudad;
}

std::string Envio::getEstado() const {
    return estado;
}

void Envio::setEstado(const std::string& estado) {
    this->estado = estado;
}

uint32_t Envio::getCodigoPostalRemitente() {
    return codigoPostalRemitente;
}

void Envio::setCodigoPostalRemitente(uint32_t codigoPostalRemitente) {
    this->codigoPostalRemitente = codigoPostalRemitente;
}

uint32_t Envio::getCodigoPostalDestinatario() {
    return codigoPostalDestinatario;
}

void Envio::setCodigoPostalDestinatario(uint32_t codigoPostalDestinatario) {
    this->codigoPostalDestinatario = codigoPostalDestinatario;
}

double Envio::calculaCosto(double peso, double distancia) {
    double costo = (peso * MULTIPLICADOR_BASE_PESO_POR_KILO) + (distancia * MULTIPLICADOR_BASE_DISTANCIA_POR_KM);
    return costo;
}