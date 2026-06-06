#pragma once
#include <iostream>
#include <sstream>

class Complejo {
private:
    int real;
    int imag;
public:
    Complejo();
    Complejo(int r, int i);
    int getReal();
    void setReal(int r);
    int getImag();
    void setImag(int i);
    Complejo operator+(Complejo c);
    Complejo operator-(Complejo c);
};

