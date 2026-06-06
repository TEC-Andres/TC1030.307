#include "complejo.h"

Complejo::Complejo() : real(0), imag(0) {}
Complejo::Complejo(int r, int i) : real(r), imag(i) {}

int Complejo::getReal() {
    return real;
}

void Complejo::setReal(int r) {
    real = r;
}

int Complejo::getImag() {
    return imag;
}

void Complejo::setImag(int i) {
    imag = i;
}

Complejo Complejo::operator+(Complejo c) {
    return Complejo(real + c.real, imag + c.imag);
}

Complejo Complejo::operator-(Complejo c) {
    return Complejo(real - c.real, imag - c.imag);

}