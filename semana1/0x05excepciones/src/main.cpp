#include <iostream>
#include "library.h"

int main() {
    Library lib;

    try {
        lib.division(10, 0); // This will throw an exception
    } catch (const std::runtime_error& e) {
        std::cerr << "Caught an exception: " << e.what() << std::endl;
    }

    return 0;
}