#include "shape.h"

class Rectangle : public Shape {
public:
    Rectangle();
    Rectangle(int x, int y, int width, int height);

    int getWidth();
    int getHeight();
    std::string draw();
private:
    int width;
    int height;
};