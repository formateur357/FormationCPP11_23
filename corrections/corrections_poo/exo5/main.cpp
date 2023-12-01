#include "calculatrice.h"
#include <iostream>

int main()
{
    Calculatrice calc;

    try
    {
        double result = calc.division(10, 0);
        cout << "Resultat: " << result << endl;
    }
    catch (const MathException &e)
    {
        cerr << "Exception capturee: " << e.what() << endl;
    }

    // Tester les autres methodes ici.

    return 0;
}