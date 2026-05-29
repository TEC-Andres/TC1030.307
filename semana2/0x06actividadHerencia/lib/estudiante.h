#pragma once
#include "persona.h"


class Estudiante : public Persona {
public:
    Estudiante();
    Estudiante(const Persona& persona, const std::string& carrera);
    Estudiante(const std::string& nombre, int edad, const std::string& carrera);
    std::string getCarrera() const;
    void setCarrera(const std::string& carrera);
    std::string str() const;

private:
    std::string carrera;
};