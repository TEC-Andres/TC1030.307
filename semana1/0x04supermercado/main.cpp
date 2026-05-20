#include <iostream>
#include <string>
#include "producto.h"
#include "comidaEmpaquetada.h"
#include "comidaFresca.h"

int main() {
	ComidaEmpaquetada comidaA(1, "Galletas", 10);
	comidaA.muestra();
	comidaA.escanear();
	comidaA.muestra();

	ComidaFresca comidaB(2, "Manzana", 25.0, 0.5);
	comidaB.muestra();
	comidaB.escanear();
	comidaB.muestra();

    return 0;
}