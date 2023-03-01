#include <iostream>
#include <vector>
#include "Application.h"
#include "Circle.h"
#include "Square.h"

using namespace std;

void Application::run()
{
    vector<Figure *> figures;
    Circle *c1 = new Circle(10.0f);
    Square *s1 = new Square(10.0f);
    figures.push_back(c1);
    figures.push_back(s1);

    for (auto *figure : figures)
    {
        cout << "Figure area is: " << (*figure).getArea() << endl;
        cout << "Figure perimeter is: " << (*figure).getPerimeter() << endl;
    }

    cout << "Circle area is: " << c1->getArea() << endl;
    cout << "Circle perimeter is: " << c1->getPerimeter() << endl;

    cout << "Square area is: " << s1->getArea() << endl;
    cout << "Square perimeter is: " << s1->getPerimeter() << endl;

    for (Figure *figure : figures)
    {
        delete figure;
    }
}