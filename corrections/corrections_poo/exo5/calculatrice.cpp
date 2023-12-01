#include "calculatrice.h"

double Calculatrice::division(double a, double b)
{
    if (b == 0)
    {
        throw MathException("Erreur de calcul: division par zero.");
    }
    return a / b;
}

// implementer les autres methodes