#pragma once
#include <iostream>
#include <string>

class Shape {
public:
    Shape();
    Shape(int x, int y);
    virtual std::string draw();

    int getXvalue();
    int getYvalue();
private:
    int x;
    int y;
};