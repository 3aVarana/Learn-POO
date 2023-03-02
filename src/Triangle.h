#pragma once

#include "Figure.h"

class Triangle : public Figure
{
private:
    float a, b, h;

public:
    Triangle(float a, float b, float h) : Figure()
    {
        this->a = a;
        this->b = b;
        this->h = h;
    }

    float getArea() override
    {
        return a * b / 2.0;
    }
    
    float getPerimeter() override
    {
        return a + b + h;
    }
};