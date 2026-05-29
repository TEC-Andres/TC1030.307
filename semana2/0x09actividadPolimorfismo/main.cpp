#include <iostream>
#include "shape.h"
#include "circle.h"
#include "rectangle.h"
#include "polygon.h"

int main() {
    Shape* shapes[5];

    shapes[0] = new Circle(5, 10, 3);
    shapes[1] = new Rectangle(15, 20, 4, 6);
    shapes[2] = new Polygon(25, 30, 5);
    shapes[3] = new Circle(35, 40, 7);
    shapes[4] = new Rectangle(45, 50, 8, 10);

    for (int i = 0; i < 5; i++) {
        std::cout << "Shape " << i + 1 << ": " << shapes[i]->draw() << std::endl;
    }
    return 0;
}