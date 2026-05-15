#include <iostream>
#include "reloj.h"

int main() {
    Reloj reloj;

    reloj.setHora(23);
    reloj.setMinuto(59);

    reloj.muestra();
    reloj.incrementaMinuto();
    reloj.muestra();
    return 0;
}