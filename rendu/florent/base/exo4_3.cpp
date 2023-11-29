#include <iostream>
#include <string>

using namespace std;

union Capteur
{
    int iVal;
    float fVal;
    char cVal;
};

main()
{
    bool stopLoop = false;

    while (!stopLoop)
    {
        Capteur capteur;

        cout << "\nEntré la valeur du capteur de type int: ";
        cin >> capteur.iVal;
        cout << "Capteur valeur : " << capteur.iVal;

        cout << "\nEntré la valeur du capteur de type float: ";
        cin >> capteur.fVal;
        cout << "Capteur valeur : " << capteur.fVal;

        cout << "\nEntré la valeur du capteur de type char: ";
        cin >> capteur.cVal;
        cout << "Capteur valeur : " << capteur.cVal;
    }

    return 0;
}
