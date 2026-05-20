#include "envio.h"

class Sobre : public Envio {
public:
    Sobre(const std::string& nombre, const std::string& direccion, const std::string& ciudad, const std::string& estado, uint32_t codigoPostal, double peso, double distancia, double largo, double ancho, double costo);
    Sobre(Envio& envio, double largo, double ancho, double costo);
    Sobre();

    double getLargo();
    void setLargo(double largo);

    double getAncho();
    void setAncho(double ancho);

    double getCosto();
    void setCosto(double costo);
    
    double calculaCosto(double peso, double distancia, double largo, double ancho);

private:
    double largo;
    double ancho;
    double costo;

    static constexpr double TARIFA_POR_SOBRE_GRANDE = 5.0;
};
