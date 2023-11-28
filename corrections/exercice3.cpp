#include <stdio.h>
#include <stdarg.h>

/**
 * calcule la moyenne d'un nombre variable d'entiers.
 *
 * @param nombreDeValeurs Le nombre d'entiers dont la moyenne doit être calculée.
 * @param ... La liste d'entiers variables.
 * @return La moyenne des valeurs passées.
 */

double calculMoyenne(int nombreDeValeurs, ...)
{
    va_list args; // Declare une variable pour stocker les informations necessaires a va_start et va_end.
    int somme = 0;

    va_start(args, nombreDeValeurs); // Initialise args pour récupérer les arguments supplémentaires après nombreDeValeurs

    for (int i = 0; i < nombreDeValeurs; i++)
    {
        somme += va_arg(args, int); // Récupère le prochain argument de type int de la liste
    }

    va_end(args); // Nettoie la liste, args ne doit plus être utilisée sans être à nouveau initialisée avec va_start

    return (double)somme / nombreDeValeurs;
}

int main()
{
    printf("Moyenne de 1, 2, 3: %f\n", calculMoyenne(3, 1, 2, 3));
    printf("Moyenne de 4, 5, 6, 7, 8: %f\n", calculMoyenne(5, 4, 5, 6, 7, 8));
    return 0;
}