#pragma once 

#include "shape.h"
class Circle : public Shape {
public:
    Circle();
    Circle(int x, int y, int radius);

    int getRadius();
private:
    int radius;
};