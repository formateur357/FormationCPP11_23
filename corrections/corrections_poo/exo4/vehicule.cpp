#include "vehicule.h"

Vehicule::Vehicule(std::string m, std::string mod, int a) : marque(m), modele(mod), annee(a){};

Vehicule::~Vehicule(){};

void Vehicule::demarrer() const
{
    std::cout << "Demarrage standard d'un vehicule.\n";
}