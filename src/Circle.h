#include "Figure.h"

#pragma once
class Circle : public Figure
{
private:
    float pi = 3.1416f;
    float radius;

public:
    Circle(float radius) : Figure()
    {
        this->radius = radius;
    }

    float getRadius()
    {
        return radius;
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
