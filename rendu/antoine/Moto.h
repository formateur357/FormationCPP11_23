#pragma once
#include "Vehicule.h"

class Moto : public Vehicule
{
private:

public:
	Moto(string modele, string marque, int annee);
	void afficherDetails() const override;

};