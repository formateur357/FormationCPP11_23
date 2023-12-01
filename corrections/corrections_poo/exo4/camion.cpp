#include "camion.h"

Camion::Camion(std::string m, std::string mod, int a) : Vehicule(m, mod, a){};

void Camion::afficherDetails() const
{
    std::cout << "Camion: Marque - " << marque << ", Modele - " << modele << ", Annee - " << annee << std::endl;
}