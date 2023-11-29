#include <iostream>
#include <vector>

using namespace std;

class CompteBancaire
{
public:
    string titulaireCompte;
    string numeroCompte;
    double soldeCompte;

    CompteBancaire(string titulaireCompte = "Nom", string numeroCompte = "0000")
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
    CompteBancaire compteBancaire1;
    compteBancaire1.showInfo();

    CompteBancaire compteBancaire2("Jean", "0002");
    compteBancaire2.deposer(10.);

    compteBancaire2.retirer(5.);
    compteBancaire2.retirer(1.);

    cout << "Solde " << compteBancaire2.obtenirSolde() << " €" << endl;

    compteBancaire2.showInfo();

    return 0;
}