#include <iostream>
#include <vector>
using namespace std;

struct date
    {
        int jour;
        int mois;
        int annee;
    } init_date;

struct produit
    {
        string nom;
        int prix;
        typedef struct date date;
    } init_produit;

void fill_produit(string &nom, int &prix,int &jour, int &mois, int &annee, date& date, produit& produit){
    produit.nom=nom;
    produit.prix=prix;
    date.jour=jour;
    date.mois=mois;
    date.annee=annee;
};

int main()
{
date d;
produit p;
cout << "Saisi des informations produit \n" << endl;
cout << "Entrez le jour : " << endl;
cin >> d.jour;
cout << "Entrez le mois : " << endl;
cin >> d.mois;
cout << "Entrez l'annee : " << endl;
cin >> d.annee;
cout << "Entrez le nom du produit : " << endl;
cin >> p.nom;
cout << "Entrez le prix du produit : " << endl;
cin >> p.prix;
fill_produit(p.nom,p.prix,d.jour,d.mois,d.annee,d,p);
cout << "le produit " << p.nom << " date du " << d.jour <<"/"<<d.mois<<"/"<<d.annee << " a pour prix : " << p.prix<<endl;
return 0;
}