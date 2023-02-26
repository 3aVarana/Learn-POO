#include "Calculator.h"

int Calculator::sum(int x, int y)
{
    return x + y;
}

int Calculator::minus(int x, int y)
{
    return x - y;
}

int Calculator::multiplication(int x, int y)
{
    return x * y;
}

float Calculator::division(int x, int y)
{
    return 1.0f * x / y;
}

int Calculator::pow(int x, int y)
{
    int result = 1;
    for (int i = 0; i < y; i++)
    {
        result *= x;
    }

    return result;
}