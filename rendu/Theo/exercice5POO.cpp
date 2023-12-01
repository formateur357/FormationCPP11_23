#include <iostream>
#include <vector>

using namespace std;

class Vehicule
{
    public:
        string  marque;
        string  modele;
        int     annee;

        Vehicule(string marque = "", string modele = "", int annee = 0) : marque(marque), modele(modele), annee(annee) {}

        ~Vehicule() {
            cout << "\nDestruction de l'obet\n" << endl;
        }

        virtual void afficherDetails() = 0;
        virtual void demarrer() = 0;

};

class Voiture : public Vehicule
{
public:
    Voiture(string marque, string modele, int annee) : Vehicule(marque, modele, annee) {}
    ~Voiture() {
        cout << "\nDestruction de l'obet\n" << endl;
    }

    void afficherDetails() {
        cout << "Voiture de marque " << marque << "; modele " << modele << "; annee : " << annee << endl;
    }
    void demarrer() {
        cout << "Demarrage voiture" << endl;
    }
};

class Moto : public Vehicule
{
public:
    Moto(string marque, string modele, int annee) : Vehicule(marque, modele, annee) {}
    ~Moto() {
        cout << "\nDestruction de l'obet\n" << endl;
    }

    void afficherDetails() {
        cout << "Moto de marque " << marque << "; modele " << modele << "; annee : " << annee << endl;
    }
    void demarrer() {
        cout << "Demarrage Moto rapide" << endl;
    }
};

class Camion : public Vehicule
{
public:
    Camion(string marque, string modele, int annee) : Vehicule(marque, modele, annee) {}
    ~Camion() {
        cout << "\nDestruction de l'obet\n" << endl;
    }

    void afficherDetails() {
        cout << "Camion de marque " << marque << "; modele " << modele << "; annee : " << annee << endl;
    }
    void demarrer() {
        cout << "Demarrage Camion long, moteur diesel" << endl;
    }
};

int main()
{
    vector<Vehicule*> vehicules;

    // Création et ajout de véhicules
    vehicules.push_back(new Voiture("Toyota", "Corolla", 2020));
    vehicules.push_back(new Moto("Yamaha", "YZF-R1", 2019));
    vehicules.push_back(new Camion("Volvo", "FH16", 2018));

    //// Affichage des détails et démarrage de chaque véhicule
    for (Vehicule* v : vehicules)
    {
        v->afficherDetails();
        v->demarrer();
    }

    //// Nettoyage de la mémoire
    for (Vehicule* v : vehicules)
    {
        delete v;
    }

    return 0;
}



