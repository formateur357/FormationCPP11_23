#include <iostream>
#include <string>

using namespace std;

class CompteBancaire
{
public:
    string titulaire;
    string numeroCompte;
    double soldeCompte;

    CompteBancaire(const string &titulaire = "", const string &numeroCompte = "", double soldeCompte = 0.0) : titulaire(titulaire), numeroCompte(numeroCompte), soldeCompte(soldeCompte) {}

    void deposer(double montant)
    {
        if (montant > 0)
        {
            soldeCompte += montant;
        }
    }

    bool retirer(double montant)
    {
        if (montant > 0 && soldeCompte >= montant)
        {
            soldeCompte -= montant;
            return true;
        }
        return false;
    }

    double obtenirSolde() const;
    // {
    //     return soldeCompte;
    // }

    void afficherInfos() const
    {
        cout << "Titulaire: " << titulaire << endl;
        cout << "Numero du compte: " << numeroCompte << endl;
        cout << "Solde: " << soldeCompte << endl;
    }
};

// double CompteBancaire::obtenirSolde() const
// {
//     return soldeCompte;
// }

int main()
{
    // Création d'un compte avec le constructeur par défaut
    CompteBancaire compte1;
    compte1.afficherInfos();

    // Création d'un compte avec des informations spécifiques
    CompteBancaire compte2("Jean Dupont", "123456789", 2000.27);
    compte2.deposer(800.0);                        // Dépôt d'argent
    const bool validite = compte2.retirer(3000.0); // Retrait d'argent
    (validite) ? cout << "Retrait reussi.\n" : cout << "Retrait echoue.\n";
    compte2.afficherInfos(); // Affichage des informations

    return 0;
}