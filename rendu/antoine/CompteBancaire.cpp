#include "CompteBancaire.h"

CompteBancaire::CompteBancaire(string titulaireCompte, int numeroCompte, float soldeCompte) : m_titulaireCompte(titulaireCompte), m_numeroCompte(numeroCompte), m_soldeCompte(soldeCompte)
{

}

CompteBancaire::CompteBancaire(string titulaireCompte, int numeroCompte) : m_titulaireCompte(titulaireCompte), m_numeroCompte(numeroCompte), m_soldeCompte(0)
{

}
void CompteBancaire::AddMoney(float plus)
{
	m_soldeCompte += plus;
}
void CompteBancaire::RetireMoney(float minus)
{
	m_soldeCompte -= minus;
}
void CompteBancaire:: DisplaySolde() const
{
	cout << "Solde sur compte : " << m_soldeCompte << endl;
}
void CompteBancaire::DisplayInfo() const
{
	cout << "Titulaire du compte : " << m_titulaireCompte << endl;
	cout << "Numero de compte : " << m_numeroCompte << endl;
}