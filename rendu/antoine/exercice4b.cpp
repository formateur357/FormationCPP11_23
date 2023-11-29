#include <iostream>
#include <string>
using namespace std;

struct Date {
    string jour;
    string mois;
    string annee;
};

struct Produit {
    string nom;
    double prix;
    Date fabricationDate;
};

void displayInfo(Produit& produit)
{
    Date date = produit.fabricationDate;
    cout << "Produit : " << produit.nom << endl;
    cout << "Prix : " << produit.prix << endl;
    cout << "Date de fabrication jour, mois, année  : " << date.jour << "/" << date.jour << "/" << date.annee << endl;

}


int main()
{
    Produit produit;
    Date date;

    cout << "Saisissez la date de fabrication du produit dans l'ordre jour, mois année : \n" << endl;
    cin >> date.jour;
    cin >> date.mois;
    cin >> date.annee;
    cout << "saisisser le nom du produit : \n" << endl;
    cin >> produit.nom;
    cout << "saisisser le prix du produit : \n" << endl;
    cin >> produit.prix;
    produit.fabricationDate = date;
    displayInfo(produit);


    return 0;
}
