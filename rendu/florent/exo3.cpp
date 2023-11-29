#include <iostream>
#include <vector>
#include <stdarg.h>

using namespace std;

double calculMoyenne(int nbValue, ...)
{
    double somme = 0.0;

    int i = 0;

    va_list varg;
    va_start(varg, nbValue);

    for (int i = 0; i < nbValue; i++)
    {
        somme += va_arg(varg, double);
    }

    va_end(varg);

    return (double)somme / nbValue;
}

int main()
{
    printf("Moyenne de 1, 2, 3: %f\n", calculMoyenne(3.0, 1.0, 2.0, 5.0));
    printf("Moyenne de 4, 5, 6, 7, 8: %f\n", calculMoyenne(5.0, 4.0, 5.0, 6.0, 7.0, 8.0));
    return 0;
}