#include "moto.h"

Moto::Moto(std::string m, std::string mod, int a) : Vehicule(m, mod, a){};

void Moto::afficherDetails() const
{
    std::cout << "Moto: Marque - " << marque << ", Modele - " << modele << ", Annee - " << annee << std::endl;
}