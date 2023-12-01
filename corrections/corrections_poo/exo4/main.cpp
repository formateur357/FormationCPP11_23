#include "voiture.h"
#include "moto.h"
#include "camion.h"
#include <vector>

int main()
{
    std::vector<Vehicule *> vehicules;

    vehicules.push_back(new Voiture("Toyota", "Corolla", 2020));
    vehicules.push_back(new Moto("Yamaha", "YZF-R1", 2019));
    vehicules.push_back(new Camion("Volvo", "FH16", 2018));

    for (Vehicule *v : vehicules)
    {
        v->afficherDetails();
        v->demarrer();
    }

    for (Vehicule *v : vehicules)
    {
        delete v;
    }

    return 0;
}