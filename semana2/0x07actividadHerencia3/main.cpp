#include <iostream>
#include "envio.h"
#include "sobre.h"
#include "paquete.h"

// Variables para que no se vea tan horrendo el constructor
double largo, ancho, alto, peso, distancia, costo, costoPorKilogramo;

int main() {
    Envio envio("Andres", "Tec de Monterrey", "Monterrey", "Nuevo León", 64500, 64800);
    Sobre sobre(envio, largo=30.0, ancho=40.0, costo=10.0);
    Paquete paquete(envio, largo=50.0, ancho=60.0, alto=70.0, peso=5.0, distancia=2.0);

    std::cout << "Información del envío:" << std::endl;
    std::cout << "----------------------" << std::endl;
    std::cout << "Nombre: " << envio.getNombre() << std::endl;
    std::cout << "Dirección: " << envio.getDireccion() << std::endl;
    std::cout << "Ciudad: " << envio.getCiudad() << std::endl;
    std::cout << "Estado: " << envio.getEstado() << std::endl;
    std::cout << "Código Postal Remitente: " << envio.getCodigoPostalRemitente() << std::endl;
    std::cout << "Código Postal Destinatario: " << envio.getCodigoPostalDestinatario() << std::endl;
    std::cout << "----------------------" << std::endl;
    std::cout << "Costo del paquete: " << paquete.calculaCosto(peso=15, distancia=10, costoPorKilogramo=3.0) << std::endl;
    std::cout << "Costo del sobre: " << sobre.calculaCosto(peso=15, distancia=10, largo=30.0, ancho=40.0) << std::endl;
    std::cout << "----------------------" << std::endl;


    return 0;
}