#include "rectangle.h"

Rectangle::Rectangle() {
    width = 0;
    height = 0;
}

Rectangle::Rectangle(int x, int y, int width, int height) : Shape(x, y) {
    this->width = width;
    this->height = height;
}

int Rectangle::getWidth() {
    return width;
}

int Rectangle::getHeight() {
    return height;
}