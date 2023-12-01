#pragma once
#include "Vehicule.h"

class Voiture : public Vehicule
{
private:

public:
	Voiture(string modele, string marque, int annee);
	void afficherDetails() const override;
};