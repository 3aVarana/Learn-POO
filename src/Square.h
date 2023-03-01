#pragma once

#include "Figure.h"

class Square : public Figure
{
private:
    float side;

public:
    Square(float side) : Figure()
    {
        this->side = side;
    }
    float getSide()
    {
        return side;
    }
    float getArea() override
    {
        return side * side;
    }
    float getPerimeter() override
    {
        return 4 * side;
    }
};
