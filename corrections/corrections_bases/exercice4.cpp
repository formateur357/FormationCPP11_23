#include <iostream>
#include <string>

using namespace std;

struct Etudiant
{
    string nom;
    int age;
    float notes[5];
};

// void    fillStudent(Etudiant& e, string nom, int age, float notes[]) {
//     e.nom = nom;
//     e.age = age;
//     for (int i = 0; i < 5; i++) {
//         e.notes[i] = notes[i];
//     }
// }

float calculerMoyenne(float notes[], int taille)
{
    float somme = 0;

    for (int i = 0; i < 5; i++)
    {
        somme += notes[i];
    }
    return somme / taille;
}

int main()
{
    Etudiant e;

    cout << "Entrez le nom de l'etudiant: ";
    getline(cin, e.nom);

    cout << "Entrez l'age de l'etudiant: ";
    cin >> e.age;

    for (int i = 0; i < 5; i++)
    {
        cout << "Entrer la note " << i + 1 << " : ";
        cin >> e.notes[i];
    }

    float moyenne = calculerMoyenne(e.notes, 5);
    cout << "La moyenne de l'etudiant " << e.nom << " est de " << moyenne << endl;

    return 0;
}
