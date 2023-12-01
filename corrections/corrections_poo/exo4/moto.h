#ifndef MOTO_H
#define MOTO_H

#include "vehicule.h"

class Moto : public Vehicule
{
public:
    Moto(std::string m, std::string mod, int a);
    void afficherDetails() const override;
};

#endif // MOTO_H