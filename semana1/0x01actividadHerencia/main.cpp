#include <iostream>
#include "shape.h"
#include "circle.h"
#include "rectangle.h"
#include "polygon.h"

int main() {
    Shape shape(10, 20);
    std::cout << shape.draw() << std::endl;
    std::cout << "Valor en X: " << shape.getXvalue() << std::endl;
    std::cout << "Valor en Y: " << shape.getYvalue() << std::endl << std::endl;

    Circle circle(30, 40, 5);
    std::cout << circle.draw() << std::endl;
    std::cout << "Valor en X: " << circle.getXvalue() << std::endl;
    std::cout << "Valor en Y: " << circle.getYvalue() << std::endl;
    std::cout << "Radio: " << circle.getRadius() << std::endl << std::endl;

    Rectangle rectangle(50, 60, 10, 20);
    std::cout << rectangle.draw() << std::endl;
    std::cout << "Valor en X: " << rectangle.getXvalue() << std::endl;
    std::cout << "Valor en Y: " << rectangle.getYvalue() << std::endl;
    std::cout << "Ancho: " << rectangle.getWidth() << std::endl;
    std::cout << "Alto: " << rectangle.getHeight() << std::endl << std::endl;

    Polygon polygon(70, 80, 6);
    std::cout << polygon.draw() << std::endl;
    std::cout << "Valor en X: " << polygon.getXvalue() << std::endl;
    std::cout << "Valor en Y: " << polygon.getYvalue() << std::endl;
    std::cout << "Lados: " << polygon.getSides() << std::endl << std::endl;

    return 0;
}