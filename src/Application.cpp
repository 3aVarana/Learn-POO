#include <iostream>
#include "Application.h"
#include "Calculator.h"
using namespace std;

void Application::run()
{
    Calculator calculator;
    int x = 8, y = 4;
    cout << x << " + " << y << " = " << calculator.sum(x, y) << endl;
    cout << x << " - " << y << " = " << calculator.minus(x, y) << endl;
    cout << x << " * " << y << " = " << calculator.multiplication(x, y) << endl;
    cout << x << " / " << y << " = " << calculator.division(x, y) << endl;
    cout << x << " ^ " << y << " = " << calculator.pow(x, y) << endl;
}