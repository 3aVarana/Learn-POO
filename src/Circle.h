#pragma once

#include "Figure.h"

class Circle : public Figure
{
private:
    float pi = 3.1416f;
    float radius;

public:
    Circle(float radius)
    {
        this->radius = radius;
    }

    float getArea()
    {
        return pi * radius * radius;
    }

    float getPerimeter()
    {
        return 2 * pi * radius;
    }

    string getName()
    {
        return "Circle";
    }
};
