#include "envio.h"

class Paquete : public Envio {
public:
    Paquete(const std::string& nombre, const std::string& direccion, const std::string& ciudad, const std::string& estado, uint32_t codigoPostalRemitente, uint32_t codigoPostalDestinatario, double largo, double ancho, double profundo, double peso, double costoPorKilogramo);
    Paquete(Envio& envio, double largo, double ancho, double profundo, double peso, double costoPorKilogramo);
    Paquete();

    double getLargo();
    void setLargo(double largo);

    double getAncho();
    void setAncho(double ancho);

    double getProfundo();
    void setProfundo(double profundo);

    double getPeso();
    void setPeso(double peso);

    double getCostoPorKilogramo();
    void setCostoPorKilogramo(double costoPorKilogramo);

    double calculaCosto(double peso, double distancia) const override;
private:
    double largo;
    double ancho;
    double profundo;
    double peso;
    double costoPorKilogramo;
};