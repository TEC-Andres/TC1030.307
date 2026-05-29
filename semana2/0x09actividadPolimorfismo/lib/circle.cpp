#include "circle.h"
Circle::Circle()  {
    radius = 0;
}

Circle::Circle(int x, int y, int radius) : Shape(x, y) {
    this->radius = radius;
}

int Circle::getRadius() {
    return radius;
}

std::string Circle::draw() {
    return Shape::draw() + "circulo";
}