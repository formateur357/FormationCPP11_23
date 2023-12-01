#ifndef VOITURE_H
#define VOITURE_H

#include "vehicule.h"

class Voiture : public Vehicule
{
public:
    Voiture(std::string m, std::string mod, int a);
    void afficherDetails() const override;
};

#endif // VOITURE_H