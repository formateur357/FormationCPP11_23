#include <iostream>
#include <vector>

int main()
{
    std::vector<Vehicule *> vehicules;

    // Création et ajout de véhicules
    vehicules.push_back(new Voiture("Toyota", "Corolla", 2020));
    vehicules.push_back(new Moto("Yamaha", "YZF-R1", 2019));
    vehicules.push_back(new Camion("Volvo", "FH16", 2018));

    // Affichage des détails et démarrage de chaque véhicule
    for (Vehicule *v : vehicules)
    {
        v->afficherDetails();
        v->demarrer();
    }

    // Nettoyage de la mémoire
    for (Vehicule *v : vehicules)
    {
        delete v;
    }

    return 0;
}