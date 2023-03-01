#pragma once

#include <vector>
#include "Circle.h"
#include "Square.h"

using namespace std;

class Application
{
public:
    void run()
    {
        vector<Figure *> figures;
        Circle *c1 = new Circle(10.0f);
        Square *s1 = new Square(10.0f);
        figures.push_back(c1);
        figures.push_back(s1);

        for (Figure *figure : figures)
        {
            cout << "Figure area is: " << (*figure).getArea() << endl;
            cout << "Figure perimeter is: " << (*figure).getPerimeter() << endl;
        }

        for (Figure *figure : figures)
        {
            delete figure;
        }
    }
};