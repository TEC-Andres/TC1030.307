#include "sobre.h"

Sobre::Sobre(const std::string& nombre, const std::string& direccion, const std::string& ciudad, const std::string& estado, uint32_t codigoPostal, double peso, double distancia, double largo, double ancho, double costo) : Envio(nombre, direccion, ciudad, estado, codigoPostal, codigoPostal) { 
    this->largo = largo;
    this->ancho = ancho;
    this->costo = costo;
}

Sobre::Sobre(Envio& envio, double largo, double ancho, double costo) : Envio(envio) {
    this->largo = largo;
    this->ancho = ancho;
    this->costo = costo;
}

Sobre::Sobre() : Envio() {
    this->largo = 0.0;
    this->ancho = 0.0;
    this->costo = 0.0;
}

double Sobre::getLargo() {
    return largo;
}

void Sobre::setLargo(double largo) {
    this->largo = largo;
}

double Sobre::getAncho() {
    return ancho;
}

void Sobre::setAncho(double ancho) {
    this->ancho = ancho;
}

double Sobre::getCosto() {
    return costo;
}

void Sobre::setCosto(double costo) {
    this->costo = costo;
}

double Sobre::calculaCosto(double peso, double distancia) const {
    if(largo > 25 && ancho > 30) {
        return Envio::calculaCosto(peso, distancia) + TARIFA_POR_SOBRE_GRANDE;
    } else {
        return Envio::calculaCosto(peso, distancia);
    }
}