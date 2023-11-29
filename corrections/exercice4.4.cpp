#include <iostream>
#include <string>

using namespace std;

struct Etudiant
{
    string nom;
    int annee;
};

struct Enseignant
{
    string nom;
    string departement;
};

union Personne
{
    struct Etudiant *etudiant;
    struct Enseignant *enseignant;
};

int main()
{
    Personne personne;

    cout << "Entrer 1 pour un etudiant et 2 pour un enseignant: ";
    int choix;
    cin >> choix;

    if (choix == 1)
    {
        personne.etudiant = new Etudiant;
        cout << "Entrez le nom de l'etudiant: ";
        cin.ignore();
        getline(cin, personne.etudiant->nom);
        cout << "Entrez l'annee de l'etudiant: ";
        cin >> personne.etudiant->annee;
    }
    else if (choix == 2)
    {
        personne.enseignant = new Enseignant;
        cout << "Entrez le nom de l'enseignant: ";
        cin.ignore();
        getline(cin, personne.enseignant->nom);
        cout << "Entrez le departement de l'enseignant: ";
        getline(cin, personne.enseignant->departement);
    }

    cout << "\nInformations: " << endl;
    if (choix == 1)
    {
        cout << "Etudiant: " << personne.etudiant->nom << ", Annee: " << personne.etudiant->annee << endl;
    }
    else if (choix == 2)
    {
        cout << "Enseignant: " << personne.enseignant->nom << ", Departement: " << personne.enseignant->departement << endl;
    }

    return 0;
}

/*
#include <iostream>
#include <string>
#include <variant>

using namespace std;

struct Etudiant
{
    string nom;
    int annee;
};

struct Enseignant
{
    string nom;
    string departement;
};

using Personne = std::variant<Etudiant, Enseignant>;

int main()
{
    Personne personne;

    cout << "Entrer 1 pour un etudiant et 2 pour un enseignant: ";
    int choix;
    cin >> choix;

    if (choix == 1)
    {
        Etudiant etudiant;
        cout << "Entrez le nom de l'etudiant: ";
        cin.ignore();
        getline(cin, etudiant.nom);
        cout << "Entrez l'annee de l'etudiant: ";
        cin >> etudiant.annee;
        personne = etudiant;
    }
    else if (choix == 2)
    {
        Enseignant enseignant;
        cout << "Entrez le nom de l'enseignant: ";
        cin.ignore();
        getline(cin, enseignant.nom);
        cout << "Entrez le departement de l'enseignant: ";
        getline(cin, enseignant.departement);
        personne = enseignant;
    }

    cout << "\nInformations: " << endl;
    if (choix == 1)
    {
        auto& etudiant = std::get<Etudiant>(personne);
        cout << "Etudiant: " << etudiant.nom << ", Annee: " << etudiant.annee << endl;
    }
    else if (choix == 2)
    {
        auto& enseignant = std::get<Enseignant>(personne);
        cout << "Enseignant: " << enseignant.nom << ", Departement: " << enseignant.departement << endl;
    }

    return 0;
}
*/