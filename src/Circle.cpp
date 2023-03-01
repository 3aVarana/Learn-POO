#include "Circle.h"

Circle::Circle(float radius)
{
    this->radius = radius;
}

float Circle::getRadius()
{
    return radius;
}

float Circle::getArea()
{
    return pi * radius * radius;
}

float Circle::getPerimeter()
{
    return 2 * pi * radius;
}
