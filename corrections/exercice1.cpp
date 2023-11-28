#include <iostream>
#include <string>

using namespace std;

void incrementerAge(int &age);

enum class Categorie
{
    FAMILLE,
    AMI,
    COLLEGUE
};

int main()
{
    string nom;
    string email;
    int age = 0;
    Categorie categorie;

    cout << "Entrez le nom du contact: ";
    getline(cin, nom);

    cout << "Entrez l'age du contact: ";
    cin >> age;
    cin.ignore();

    cout << "Entrez l'email du contact: ";
    getline(cin, email);

    cout << "Entrez la categorie du contact (0 pour FAMILLE, 1 pour AMI et 2 pour COLLEGUE): ";
    auto cat = 0;
    cin >> cat;
    categorie = static_cast<Categorie>(cat);

    auto ptrNom = &nom;
    auto ptrAge = &age;
    auto ptrEmail = &email;

    cout << "\n Informations du contact" << endl;
    cout << "Nom: " << *ptrNom << endl;
    cout << "Age: " << *ptrAge << endl;
    cout << "Email: " << *ptrEmail << endl;
    cout << "Categorie: " << static_cast<int>(categorie) << endl;

    incrementerAge(age);

    cout << "Age apres incrementation: " << age << endl;

    return 0;
}

void incrementerAge(int &age)
{
    ++age;
}