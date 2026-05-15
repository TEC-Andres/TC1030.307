#pragma once
#include <string>
#include <iostream>
class Reloj {
public:
    Reloj();
    void setHora(int h);
    void setMinuto(int m);

    int getHora();
    int getMinuto();

    void muestra();
    void incrementaMinuto();

private:
    int hora;
    int minuto;
};