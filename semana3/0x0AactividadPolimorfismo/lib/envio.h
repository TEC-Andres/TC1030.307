#pragma once
#include <string>
#include <cstdint>

class Envio {
public: 
    Envio(const std::string& nombre, const std::string& direccion, const std::string& ciudad, const std::string& estado, uint32_t codigoPostalRemitente, uint32_t codigoPostalDestinatario);
    Envio();
    virtual ~Envio() = default;

    std::string getNombre() const;
    void setNombre(const std::string& nombre);

    std::string getDireccion() const;
    void setDireccion(const std::string& direccion);

    std::string getCiudad() const;
    void setCiudad(const std::string& ciudad);

    std::string getEstado() const;
    void setEstado(const std::string& estado);

    uint32_t getCodigoPostalRemitente() const;
    void setCodigoPostalRemitente(uint32_t codigoPostalRemitente);
    
    uint32_t getCodigoPostalDestinatario() const;
    void setCodigoPostalDestinatario(uint32_t codigoPostalDestinatario);

    virtual double calculaCosto(double peso, double distancia) const;

private: 
    std::string nombre;
    std::string direccion;
    std::string ciudad;
    std::string estado;
    uint32_t codigoPostalRemitente;
    uint32_t codigoPostalDestinatario;

    static constexpr double MULTIPLICADOR_BASE_PESO_POR_KILO = 2.0;
    static constexpr double MULTIPLICADOR_BASE_DISTANCIA_POR_KM = 0.1;
};