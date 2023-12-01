#include "voiture.h"

Voiture::Voiture(std::string m, std::string mod, int a) : Vehicule(m, mod, a){};

void Voiture::afficherDetails() const
{
    std::cout << "Voiture: Marque - " << marque << ", Modele - " << modele << ", Annee - " << annee << std::endl;
}