#pragma once

#include <vector>
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
#include "Rectangle.h"

using namespace std;

class Application
{
public:
    void run()
    {
        vector<Figure *> figures;

        figures.push_back(new Circle(5.0f));
        figures.push_back(new Square(5.0f));
        figures.push_back(new Circle(15.0f));
        figures.push_back(new Square(15.0f));

        figures.push_back(new Triangle(3.0f, 4.0f, 5.0f));
        figures.push_back(new Rectangle(2.0f, 8.0f));
        figures.push_back(new Triangle(6.0f, 8.0f, 10.0f));
        figures.push_back(new Rectangle(5.0f, 13.0f));

        for (Figure *figure : figures)
        {
            cout << "Area: " << figure->getArea() << endl;
            cout << "Perimeter: " << (*figure).getPerimeter() << endl;
        }

        for (Figure *figure : figures)
        {
            delete figure;
        }
    }
};