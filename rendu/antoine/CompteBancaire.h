#pragma once
#include <iostream>
#include <string>
using namespace std;

class CompteBancaire
{
public:
	CompteBancaire(string titulaireCompte, int numeroCompte, float soldeCompte);
	CompteBancaire(string titulaireCompte, int numeroCompte);
	void AddMoney(float plus);
	void RetireMoney(float minus);
	void DisplaySolde() const;
	void DisplayInfo() const;

private:
	string m_titulaireCompte;
	int m_numeroCompte;
	float m_soldeCompte;
};