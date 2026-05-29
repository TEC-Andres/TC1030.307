#include "library.h"

Library::Library() {
    this->name = "Andres";
    this->hello();
}

Library::~Library() {

}

void Library::hello() {
    std::cout << "Hello " << this->name << "!" << std::endl;
}

void Library::division(float a, float b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero is not allowed.");
    }
    std::cout << "Result: " << a / b << std::endl;
}