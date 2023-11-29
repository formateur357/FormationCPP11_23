#include <iostream>
#include <string>

using namespace std;

struct Date
{
    int day;
    int month;
    int year;
};

struct Product
{
    string name;
    float price;
    Date creationDate;
};

void createProduct()
{
    Product product;

    cout << "\n Entrez le nom du produit:";
    cin >> product.name;

    cout << "\n Entrez le prix du produit:";
    cin >> product.price;

    cout << "\n Entrez la date de creation du produit:";

    cout << "\n Entrez le jour :";
    cin >> product.creationDate.day;

    cout << "\n Entrez le numero du mois :";
    cin >> product.creationDate.month;

    cout << "\n Entrez la l'année :";
    cin >> product.creationDate.year;

    printf("\nVous avez crée le produit %s au prix de %02f€ le %02d/%02d/%4d\n",
           product.name.c_str(),
           product.price,
           product.creationDate.day,
           product.creationDate.month,
           product.creationDate.year);

    cout << "\n Entrez la l'année :";
}

main()
{
    bool stopLoop = false;
    int userReturn = 0;

    while (!stopLoop)
    {
        cout << "\nVoulez vous: \n";
        cout << "\t - 1 = Crée un nouveau produit " << endl;
        cout << "\t - 4 = Quitter \n";

        cout << "Entrez votre choix : ";
        cin >> userReturn;

        if (userReturn == 1)
        {
            createProduct();
        }
        else if (userReturn == 4)
        {
            stopLoop = true;
        }
        else
        {
            cout << "Je n'ai pas compris votre reponse\n";
        }
    }

    return 0;
}