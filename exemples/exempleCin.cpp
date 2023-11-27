#include <iostream>

using namespace std;

int main()
{
    int age;
    string nom;
    string description;

    cout << "Entrez votre age : ";
    cin >> age;

    cout << "Entrez votre nom : ";
    cin >> nom;

    cout << "Entrez une description : ";

    // nettoyer le tampon d'entree
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    getline(cin, description);

    cout << "Bonjour, " << nom << "! Vous avez " << age << " ans." << endl
         << description << endl;

    return 0;
}