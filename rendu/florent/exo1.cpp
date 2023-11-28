#include <iostream>

using namespace std;

enum class Categorie
{
    FAMILLE,
    AMI,
    COLLEGUE,
};

void incrementAge(int &age)
{
    ++age;
    return;
}

int main()
{
    string nom;
    string email;
    int age = 0;
    Categorie categorie;

    cout << "Entrez vote nom : " << endl;
    getline(cin, nom);

    cout << "Entrez vote age : " << endl;
    cin >> age;
    cin.ignore();

    cout << "Entrez vote email : " << endl;
    getline(cin, email);

    cout << "Entrez vote categorie (0: FAMILLE, 1: AMI, 2: COLLEGUE ): " << endl;
    auto intCategorie = 0;
    cin >> intCategorie;
    categorie = static_cast<Categorie>(intCategorie);

    auto ptrNom = &nom;
    auto ptrEmail = &email;
    auto ptrAge = &age;

    cout << "\nInformation du contact: " << endl;
    cout << " - Nom \t\t: " << *ptrNom << endl;
    cout << " - Age \t\t: " << *ptrAge << endl;
    cout << " - Email \t: " << *ptrEmail << endl;
    cout << " - Category \t: " << static_cast<int>(categorie) << endl;

    incrementAge(age);

    cout << "\nVous aurez bientot " << *ptrAge << " ans." << endl;

    return 0;
}