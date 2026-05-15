#pragma once
#include "shape.h"

class Polygon : public Shape {
public:
    Polygon();
    Polygon(int x, int y, int sides);

    int getSides();

private:
    int sides;
};