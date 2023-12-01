#include "Voiture.h"

Voiture::Voiture(string modele, string marque, int annee) : Vehicule(modele, marque, annee)
{
}

void Voiture::afficherDetails() const
{
	cout << "je suis une voiture" << "mes infos (modele, marque annee)\n "
		<< m_modele << m_marque << m_annee << endl;
}
