#pragma once

#include "Figure.h"

class Rectangle : public Figure
{
private:
    float smallSide, bigSide;

public:
    Rectangle(float smallSide, float bigSide) : Figure()
    {
        this->smallSide = smallSide;
        this->bigSide = bigSide;
    }

    float getArea() override
    {
        return smallSide * bigSide;
    }

    float getPerimeter() override
    {
        return 2 * (smallSide + bigSide);
    }
};