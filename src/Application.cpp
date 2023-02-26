#include <iostream>
#include "Application.h"
#include "Circle.h"
using namespace std;

void Application::run()
{
    Circle circle1(10.0f);

    cout << "Circle radius is: " << circle1.getRadius() << endl;
    cout << "Circle Area is: " << circle1.getArea() << endl;
    cout << "Circle Circumference is: " << circle1.getCircumference() << endl;
}