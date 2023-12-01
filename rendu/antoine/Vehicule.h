#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vehicule {
protected:
	string m_modele;
	string m_marque;
	int m_annee;

public:
	Vehicule(string modele, string marque, int annee);
	virtual void afficherDetails() const = 0;
	virtual void demarrer();

};