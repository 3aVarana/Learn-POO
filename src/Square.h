#pragma once

#include "Figure.h"

class Square : public Figure
{
private:
    float side;

public:
    Square(float side)
    {
        this->side = side;
    }

    float getArea()
    {
        return side * side;
    }

    float getPerimeter()
    {
        return 4 * side;
    }

    string getName()
    {
        return "Square";
    }
};
