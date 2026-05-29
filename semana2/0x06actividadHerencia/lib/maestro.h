#pragma once
#include "persona.h"

class Maestro : public Persona {
public:
    Maestro();
    Maestro(const Persona& persona, const std::string& puesto);
    Maestro(const std::string& nombre, int edad, const std::string& puesto);
    std::string getPuesto() const;
    void setPuesto(const std::string& puesto);
    std::string str() const;

private:
    std::string puesto;
};