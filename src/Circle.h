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

    float getArea() override
    {
        return pi * radius * radius;
    }

    float getPerimeter() override
    {
        return 2 * pi * radius;
    }
};
