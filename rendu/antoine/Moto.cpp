#include "Moto.h"

Moto::Moto(string modele, string marque, int annee) : Vehicule(modele, marque, annee)
{
}

void Moto::afficherDetails() const
{
	cout << "je suis une moto" << "mes infos (modele, marque annee)\n "
		<< m_modele << m_marque << m_annee << endl;

}

