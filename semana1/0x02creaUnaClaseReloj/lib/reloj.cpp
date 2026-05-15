#include "reloj.h"

Reloj::Reloj() : hora(0), minuto(0) {}

void Reloj::setHora(int h) {
    if (h >= 0 && h < 24) {
        hora = h;
    }
}

void Reloj::setMinuto(int m) {
    if (m >= 0 && m < 60) {
        minuto = m;
    }
}

int Reloj::getHora() {
    return hora;
}

int Reloj::getMinuto() {
    return minuto;
}

void Reloj::muestra() {
    std::cout << (hora < 10 ? "0" : "") << hora << ":"
              << (minuto < 10 ? "0" : "") << minuto << std::endl;
}

void Reloj::incrementaMinuto() {
    minuto++;
    if (minuto >= 60) {
        minuto = 0;
        hora++;
        if (hora >= 24) {
            hora = 0;
        }
    }
}