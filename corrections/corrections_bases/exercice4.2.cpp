#include <iostream>
#include <string>

using namespace std;

struct Date
{
    int jour;
    int mois;
    int annee;
};

struct Produit
{
    string nom;
    float prix;
    Date dateFabrication;
};

void afficherInfosProduit(Produit &produit)
{
    cout << "Informations du produit: " << endl;
    cout << "Nom: " << produit.nom << endl;
    cout << "Prix: " << produit.prix << endl;
    cout << "Date de fabrication: " << produit.dateFabrication.jour << "/" << produit.dateFabrication.mois << "/" << produit.dateFabrication.annee << endl;
}

int main()
{
    Produit produit;

    memset(&produit, 0, sizeof(Produit));

    cout << "Entrez le nom du produit: ";
    getline(cin, produit.nom);

    cout << "Entrez le prix du produit: ";
    cin >> produit.prix;

    cout << "Entrez la date de fabrication (jour mois annee): ";
    cin >> produit.dateFabrication.jour >> produit.dateFabrication.mois >> produit.dateFabrication.annee;

    afficherInfosProduit(produit);
    return 0;
}