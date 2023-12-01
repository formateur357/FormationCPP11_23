#include "Calculator.h"
#include "MathException.h"

double Calculator::add(double a, double b)
{
    return a + b;
}

double Calculator::subtract(double a, double b)
{
    return a - b;
}

double Calculator::multiply(double a, double b)
{
    return a * b;
}

double Calculator::divide(double a, double b)
{
    if (b == 0) {
        throw MathException("Division par 0");
    }
    return a / b;
}
