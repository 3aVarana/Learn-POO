#include "Figure.h"

#pragma once
class Square : public Figure
{
private:
    float side;

public:
    Square(float side);
    float getSide();
    float getArea();
    float getPerimeter();
};
