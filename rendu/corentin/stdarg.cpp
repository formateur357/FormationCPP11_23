#include <stdarg.h>
#include <iostream>

double calculeMoyenne(int nb_valeur,...)
{
    va_list varg;
    int memoire=nb_valeur;
    double resultat = 0;
    va_start(varg, nb_valeur); /* Initialisation de la liste */
    /* Parcours de la liste */
    while (nb_valeur != 0)
    {
        resultat = resultat + va_arg(varg, double); /* récupère le prochain paramètre dans la liste */
        nb_valeur = nb_valeur-1;
    }
    va_end(varg);
    resultat=resultat/memoire;
    return resultat;
}

int main()
{
double moyenne = 0;
moyenne = calculeMoyenne(1, 2, 3, 4.3); 
printf("premiere moyenne : %.1f\n", moyenne); 
moyenne = calculeMoyenne(12, 0.5, 3.75); 
printf("deuxieme moyenne : %.1f\n", moyenne); 
return 0;
}