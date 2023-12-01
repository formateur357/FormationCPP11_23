#ifndef CAMION_H
#define CAMION_H

#include "vehicule.h"

class Camion : public Vehicule
{
public:
    Camion(std::string m, std::string mod, int a);
    void afficherDetails() const override;
};

#endif // CAMION_H