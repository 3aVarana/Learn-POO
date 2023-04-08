#pragma once

#include "Figure.h"

class Triangle : public Figure
{
private:
    float a, b, h;

public:
    Triangle(float a, float b, float h)
    {
        this->a = a;
        this->b = b;
        this->h = h;
    }

    float getArea()
    {
        return a * b / 2.0;
    }

    float getPerimeter()
    {
        return a + b + h;
    }

    string getName()
    {
        return "Triangle";
    }
};