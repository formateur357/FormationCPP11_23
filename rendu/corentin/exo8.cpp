#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Vehicule {
public:
    Vehicule(const string& marque, const string& modele, int annee): marque(marque), modele(modele), annee(annee) {}

    virtual void afficherDetails() const = 0;

    virtual void demarrer() const {
        cout << "Demarrage d'un vehicule." << endl;
    }

protected:
    std::string marque;
    std::string modele;
    int annee;
};

// Classe dérivée Voiture
class Voiture : public Vehicule {
public:
    Voiture(const std::string& marque, const std::string& modele, int annee): Vehicule(marque, modele, annee) {}

    void afficherDetails() const override {
        std::cout << "Voiture: Marque - " << marque << ", Modele - " << modele << ", Annee - " << annee << std::endl;
    }

    void demarrer() const override {
        std::cout << "Demarrage standard d'une voiture." << std::endl;
    }

};

// Classe dérivée Moto
class Moto : public Vehicule {
public:
    Moto(const std::string& marque, const std::string& modele, int annee): Vehicule(marque, modele, annee) {}

    void afficherDetails() const override {
        std::cout << "Moto: Marque - " << marque << ", Modele - " << modele << ", Annee - " << annee << std::endl;
    }

    void demarrer() const override {
        std::cout << "Demarrage rapide d'une moto." << std::endl;
    }

};

// Classe dérivée Camion
class Camion : public Vehicule {
public:
    Camion(const std::string& marque, const std::string& modele, int annee): Vehicule(marque, modele, annee) {}

    void afficherDetails() const override {
        std::cout << "Camion: Marque - " << marque << ", Modele - " << modele << ", Annee - " << annee << std::endl;
    }

    void demarrer() const override {
        std::cout << "Demarrage d'un camion avec un moteur diesel." << std::endl;
    }
};

int main() {
    //Exemple
    Voiture voiture("Toyota", "Corolla", 2020);
    Moto moto("Yamaha", "YZF-R1", 2019);
    Camion camion("Volvo", "FH16", 2018);

    // Affichage des détails et démarrage
    voiture.afficherDetails();
    voiture.demarrer();
    moto.afficherDetails();
    moto.demarrer();
    camion.afficherDetails();
    camion.demarrer();

    return 0;
}
