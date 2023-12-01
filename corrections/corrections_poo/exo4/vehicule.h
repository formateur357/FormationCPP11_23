#ifndef VEHICULE_H
#define VEHICULE_H

#include <iostream>
#include <string>

class Vehicule
{
protected:
    std::string marque;
    std::string modele;
    int annee;

public:
    Vehicule(std::string m, std::string mod, int a);
    virtual ~Vehicule();

    virtual void afficherDetails() const = 0;
    virtual void demarrer() const;
};

#endif // VEHICULE_H