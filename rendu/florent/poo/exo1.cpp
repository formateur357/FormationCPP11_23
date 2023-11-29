#include <iostream>
#include <vector>

using namespace std;

class CompteBancaire
{
public:
    string titulaireCompte;
    string numeroCompte;
    double soldeCompte;

    CompteBancaire(string titulaireCompte, string numeroCompte)
    {
        this->titulaireCompte = titulaireCompte;
        this->numeroCompte = numeroCompte;
        this->soldeCompte = 0.;
    }
    void deposer(double montant)
    {
        this->soldeCompte += montant;
    }

    bool retirer(double montant)
    {
        if (montant <= this->soldeCompte)
        {
            this->soldeCompte -= montant;
            return true;
        }
        else
        {
            return false;
        }
    }
    double obtenirSolde() const
    {
        return this->soldeCompte;
    }

    void showInfo() const
    {
        cout << "Titulaire du compte  " << this->titulaireCompte << endl;
        cout << "Numero de compte  " << this->numeroCompte << endl;
        cout << "Solde du compte  " << this->soldeCompte << " €" << endl;
    }
};

int main()
{
    CompteBancaire compteBancaire("Jean", "0002");
    compteBancaire.deposer(10.);

    compteBancaire.retirer(5.);

    cout << "Solde " << compteBancaire.obtenirSolde() << " €" << endl;

    compteBancaire.showInfo();

    return 0;
}