#include <iostream>

using namespace std;



class CompteBancaire
{
    public:
        string titulaireCompte;
        string numeroCompte;
        double soldeCompte;
        
        CompteBancaire(string titulaireCompte, string numeroCompte) : soldeCompte(0.0) //, double soldeCompte = 0.0)
        {
            this->titulaireCompte   = titulaireCompte;
            this->numeroCompte      = numeroCompte;
            //this->soldeCompte     = soldeCompte;
        }

        void deposer(double montant)
        {
            soldeCompte += montant;
            printf("\nmontant de %lf euros depose sur le compte; solde actuel : %lf euros\n", montant, soldeCompte);
        }

        bool retirer(double montant)
        {
            bool estPossible;
            if (montant > soldeCompte) 
            {
                printf("\nle montant de %lf euros n'est pas disponible; solde actuel : %lf euros\n", montant, soldeCompte);
                estPossible = false;
            }
            else
            {
                soldeCompte -= montant;
                printf("\nmontant de %lf euros retiré; solde actuel : %lf euros\n", montant, soldeCompte);
                estPossible = true;
            }
            return estPossible;
        }

        double obtenirSolde() const
        {
            printf("\nsolde actuel : %lf euros\n", soldeCompte);
            return soldeCompte;
        }

        void affiche() const
        {
            cout << this->titulaireCompte   << endl;
            cout << this->numeroCompte      << endl;
            cout << this->soldeCompte       << endl;
        }

};






int main()
{   
    double   solde;
    bool     testRetire;


    CompteBancaire compteA("testnom", "testnumero");


    compteA.affiche();

    compteA.deposer(100.);
    testRetire = compteA.retirer(200);


    compteA.deposer(400.);
    testRetire = compteA.retirer(200);

    solde = compteA.obtenirSolde();
    compteA.deposer(400.);
    solde = compteA.obtenirSolde();

}

