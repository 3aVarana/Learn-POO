#include "Figure.h"

#pragma once
class Circle : public Figure
{
private:
    float pi = 3.1416f;
    float radius;

public:
    Circle(float radius);
    float getRadius();
    float getArea();
    float getPerimeter();
};
