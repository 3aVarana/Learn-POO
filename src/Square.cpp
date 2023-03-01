#include "Square.h"

Square::Square(float side)
{
    this->side = side;
}

float Square::getSide()
{
    return side;
}

float Square::getArea()
{
    return side * side;
}

float Square::getPerimeter()
{
    return 4 * side;
}
