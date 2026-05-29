#include "polygon.h"

Polygon::Polygon() {
    sides = 0;
}

Polygon::Polygon(int x, int y, int sides) : Shape(x, y) {
    this->sides = sides;
}

int Polygon::getSides() {
    return sides;
}

std::string Polygon::draw() {
    return Shape::draw() + "poligono";
}