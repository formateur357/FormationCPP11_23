#include <iostream>

using namespace std;

union Data
{
    int entier;
    float flottant;
    char caractere;
};

int main()
{
    Data donnee;

    donnee.entier = 5;
    cout << "Valeur Entiere: " << donnee.entier << endl;

    donnee.flottant = 3.14f;
    cout << "Valeur flottante: " << donnee.flottant << endl;

    donnee.caractere = 'A';
    cout << "Valeur caractere: " << donnee.caractere << endl;

    return 0;
}