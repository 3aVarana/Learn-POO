#pragma once
#include <string>
using namespace std;

class Figure
{
public:
    virtual float getArea() = 0;

    virtual float getPerimeter() = 0;

    virtual string getName() = 0;
};