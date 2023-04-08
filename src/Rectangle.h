#pragma once

#include "Figure.h"

class Rectangle : public Figure
{
private:
    float smallSide, bigSide;

public:
    Rectangle(float smallSide, float bigSide)
    {
        this->smallSide = smallSide;
        this->bigSide = bigSide;
    }

    float getArea()
    {
        return smallSide * bigSide;
    }

    float getPerimeter()
    {
        return 2 * (smallSide + bigSide);
    }

    string getName()
    {
        return "Rectangle";
    }
};