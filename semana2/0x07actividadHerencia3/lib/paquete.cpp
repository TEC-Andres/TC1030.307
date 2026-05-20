#include "paquete.h"

Paquete::Paquete(const std::string& nombre, const std::string& direccion, const std::string& ciudad, const std::string& estado, uint32_t codigoPostalRemitente, uint32_t codigoPostalDestinatario, double largo, double ancho, double profundo, double peso, double costoPorKilogramo) : Envio(nombre, direccion, ciudad, estado, codigoPostalRemitente, codigoPostalDestinatario) {
    this->largo = largo;
    this->ancho = ancho;
    this->profundo = profundo;
    this->peso = peso;
    this->costoPorKilogramo = costoPorKilogramo;
}

Paquete::Paquete(Envio& envio, double largo, double ancho, double profundo, double peso, double costoPorKilogramo) {
    this->largo = largo;
    this->ancho = ancho;
    this->profundo = profundo;
    this->peso = peso;
    this->costoPorKilogramo = costoPorKilogramo;
}

Paquete::Paquete() : Envio() {
    this->largo = 0.0;
    this->ancho = 0.0;
    this->profundo = 0.0;
    this->peso = 0.0;
    this->costoPorKilogramo = 0.0;
}

double Paquete::getLargo() {
    return largo;
}

void Paquete::setLargo(double largo) {
    this->largo = largo;
}

double Paquete::getAncho() {
    return ancho;
}

void Paquete::setAncho(double ancho) {
    this->ancho = ancho;
}

double Paquete::getProfundo() {
    return profundo;
}

void Paquete::setProfundo(double profundo) {
    this->profundo = profundo;
}

double Paquete::getPeso() {
    return peso;
}

void Paquete::setPeso(double peso) {
    this->peso = peso;
}

double Paquete::getCostoPorKilogramo() {
    return costoPorKilogramo;
}

void Paquete::setCostoPorKilogramo(double costoPorKilogramo) {
    this->costoPorKilogramo = costoPorKilogramo;
}


double Paquete::calculaCosto(double peso, double distancia, double costoPorKilogramo) {
    return Envio::calculaCosto(peso, distancia) + (peso * costoPorKilogramo);
}