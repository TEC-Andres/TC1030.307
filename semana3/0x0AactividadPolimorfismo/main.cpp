#include <iostream>
#include <vector>
#include "envio.h"
#include "sobre.h"
#include "paquete.h"

int main() {
    Envio base("Andres", "Tec de Monterrey", "Monterrey", "Nuevo León", 64500, 64800);
    Sobre sobre(base, 30.0, 40.0, 10.0);
    Paquete paquete(base, 50.0, 60.0, 70.0, 5.0, 3.0);

    std::vector<Envio*> envios = { &sobre, &paquete };
    const double peso = 15.0;
    const double distancia = 10.0;
    double costoTotal = 0.0;

    for (const Envio* envio : envios) {
        std::cout << "Remitente" << std::endl;
        std::cout << envio->getNombre() << std::endl;
        std::cout << envio->getDireccion() << std::endl;
        std::cout << envio->getCiudad() << ", " << envio->getEstado() << " " << envio->getCodigoPostalRemitente() << std::endl;
        std::cout << std::endl;

        std::cout << "Destinatario" << std::endl;
        std::cout << envio->getNombre() << std::endl;
        std::cout << envio->getDireccion() << std::endl;
        std::cout << envio->getCiudad() << ", " << envio->getEstado() << " " << envio->getCodigoPostalDestinatario() << std::endl;

        const double costo = envio->calculaCosto(peso, distancia);
        std::cout << "Costo del envio: " << costo << std::endl;
        std::cout << "----------------------" << std::endl;
        costoTotal += costo;
    }

    std::cout << "Costo total de envios: " << costoTotal << std::endl;
    return 0;
}