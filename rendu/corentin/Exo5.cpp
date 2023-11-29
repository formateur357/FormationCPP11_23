#include <iostream>
#include <string>

using namespace std;

// CompteBancaire::CompteBancaire()
// {
//     this->titulaireCompte = 0.; 
//     this->numeroCompte = 0.;
//     this-> soldeCompte = 0.;
// }

// CompteBancaire::CompteBancaire(string titulaireCompte, string numeroCompte, double soldeCompte)

// {
//     this->titulaireCompte = titulaireCompte; 
//     this->numeroCompte = numeroCompte;
//     this-> soldeCompte = soldeCompte;
// }

class CompteBancaire
{

public:
    string titulaireCompte;
    string numeroCompte;
    double soldeCompte;
    // CompteBancaire(const string& titulaireCompte="",const string& numeroCompte="", double soldeCompte=0.0): titulaireCompte(titulaireCompte), numeroCompte(numeroCompte), soldeCompte(0.)
    // { 
    // }

    CompteBancaire(const string &titulaireCompte = "", const string &numeroCompte = "", double soldeCompte = 0.0) : titulaireCompte(titulaireCompte), numeroCompte(numeroCompte), soldeCompte(soldeCompte) {}

    void affiche() const
    {
        cout << this->titulaireCompte << endl;
        cout << this->numeroCompte << endl;
        cout << this->soldeCompte << endl;
    }

    void deposer(double montant)
    {
        soldeCompte+=montant;
    }

    bool retirer(double montant)
    {   
        soldeCompte-=montant;
        return true;
    }

    double obtenirSolde() const
    {
        return soldeCompte;
    }
};


int main()
{
    CompteBancaire compte1("Toto","12345",200);
    compte1.deposer(12);
    compte1.retirer(150);
    compte1.obtenirSolde();
    compte1.affiche();

    return 0;
}

