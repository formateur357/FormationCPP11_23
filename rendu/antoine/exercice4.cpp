#include <iostream>
#include <string>
using namespace std;

struct Etudiant {
    string nom;
    int age;
    double notes[5];
};

void addNotes(Etudiant& etudiant)
{
    cout << "Entrez les 5 notes de l'etudiant :\n";

    for (int i = 0; i < 5; ++i) {
        cout << "Note " << i + 1 << " : ";
        cin >> etudiant.notes[i];
    }
}

double computeMean(const Etudiant& etudiant)
{
    double somme = 0.0;
    for (int i = 0; i < 5; ++i) {
        somme += etudiant.notes[i];
    }
    double moyenne = somme / 5;
    return moyenne;
}

int main()
{
    Etudiant etudiant;
    cout << "Entrez le nom de l'etudiant : ";
    getline(cin, etudiant.nom);

    cout << "Entrez l'age de l'etudiant : ";
    cin >> etudiant.age;

    addNotes(etudiant);

    cout << "\nInformations de l'etudiant :\n";
    cout << "Nom : " << etudiant.nom << "\n";
    cout << "Age : " << etudiant.age << " ans\n";
    cout << "Moyenne des notes : " << computeMean(etudiant) << "\n";

    return 0;
}
