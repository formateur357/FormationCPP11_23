#include <iostream>

using namespace std;

//string demanderNom() 
//{
//    string nom;
//    cout << "Quel est le nom de l'etudiant ?" << endl;
//    cin >> nom;
//
//    return nom;
//}
//
//int demanderAge() 
//{
//    int age;
//    cout << "Quel est l'age de l'etudiant ?" << endl;
//    cin >> age;
//
//    return age;
//}
//
//void AjoutNote(int TableauNote[]) 
//{
//    for (int i = 0; i < 3; i++)
//    {
//        int note = 0;
//        do {
//            cout << "\n" << "Quel est la note " << i + 1 << " de l'eleve ?" << endl;
//            cin >> note;
//            TableauNote[i] = note;
//        } while (note < 0 || note > 20);
//    }
//    return TableauNote
//}
//
//void Moyenne(int TableauNote[]) {
//    int   valeur = 0;
//    float valMoyenne;
//    int i = 0;
//
//    do {
//        valeur = valeur + TableauNote[i];
//        i++;
//    } while (i < 3);
//
//    valMoyenne = valeur / 3;
//    cout << "\n" << "Moyenne : " << valMoyenne << endl;
//}
//
//int main()
//{
//
//    struct Etudiant
//    {
//        string  nom;
//        int     age;
//        int     TableauNote[3] = { 0 };
//    };
//    
//    struct Etudiant informationEtudiant;
//    Etudiant informationEtudiant = { "Theo", 27 , []};
//    
//     détermination du nom
//    informationEtudiant.nom = demanderNom();
//
//     détermination de l'age
//    informationEtudiant.age = demanderAge();
//
//     détermination note
//    AjoutNote(informationEtudiant.TableauNote);
//    
//    affichage
//    cout << "\nnom de l'etudiant : " << informationEtudiant.nom << endl;
//    cout << "age de l'etudiant : " << informationEtudiant.age << endl;
//    cout << "note de l'etudiant :" << endl;
//    for (int i = 0; i < 3; i++) 
//    {
//        cout  << informationEtudiant.TableauNote[i] << "\t";
//    }
//    Moyenne(informationEtudiant.TableauNote);
//
//}



string demanderNom() 
{
    string nom;
    cout << "Quel est le nom du produit ?" << endl;
    cin >> nom;

    return nom;
}

double demanderPrix()
{
    double prix;
    cout << "Quel est le prix du produit ?" << endl;
    cin >> prix;

    return prix;
}

int demanderJourFabrication()
{
    int date;
    cout << "Quel est le jour de fabrication du produit ?" << endl;
    cin >> date;

    return date;
}

int demanderMoisFabrication()
{
    int date;
    cout << "Quel est le mois de fabrication du produit ?" << endl;
    cin >> date;

    return date;
}

int demanderAnneeFabrication()
{
    int date;
    cout << "Quel est l'annee de fabrication du produit ?" << endl;
    cin >> date;

    return date;
}

int main()
{
    struct Date
    {
        int     jour;
        int     mois;
        int     annee;
    };
    
    struct Produit
    {
        string           nom;
        double           prix;
        struct Date      dateFabrication;
    };

    struct Produit informationProduit;

    informationProduit.nom                   = demanderNom();
    informationProduit.prix                  = demanderPrix();
    informationProduit.dateFabrication.jour  = demanderJourFabrication();
    informationProduit.dateFabrication.mois  = demanderMoisFabrication();
    informationProduit.dateFabrication.annee = demanderAnneeFabrication();

    cout << informationProduit.nom << endl;
    cout << informationProduit.prix << endl;
    cout << informationProduit.dateFabrication.jour << endl;
    cout << informationProduit.dateFabrication.mois << endl;
    cout << informationProduit.dateFabrication.annee << endl;
}