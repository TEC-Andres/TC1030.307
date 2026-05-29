#include "shape.h"
Shape::Shape() {
    x = 0;
    y = 0;
}

Shape::Shape(int x, int y) {
    this->x = x;
    this->y = y;
}

std::string Shape::draw() {
    return "soy la figura ";
}

int Shape::getXvalue() {
    return x;
}

int Shape::getYvalue() {
    return y;
}