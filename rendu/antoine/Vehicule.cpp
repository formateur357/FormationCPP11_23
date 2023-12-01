#include "Vehicule.h"

Vehicule::Vehicule(string modele, string marque, int annee) : m_modele(modele), m_marque(marque), m_annee(annee)
{
}

void Vehicule::demarrer()
{
	cout << "vroum vehicule" << endl;
}


