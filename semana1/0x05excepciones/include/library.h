#pragma once
#include <iostream>
#include <stdexcept>
#include <string>

class Library {
public:
    Library();
    ~Library();
    std::string name;

    void division(float a, float b);


private:
    void hello();

};