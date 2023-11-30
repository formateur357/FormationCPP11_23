#include "Point.h"
#include <iostream>

int main()
{
    // Test de la création d'instances de Point et de la méthode statique compte()
    // Point p0, p1(4, 0.0), p2(2.5, 2.5);
    // std::cout << "Il y a " << Point::compte() << " points\n"; // Affiche : Il y a 3 points

    // Test de la création dynamique d'un Point et mise à jour du compteur
    // Point *pp = new Point(1, 1);
    // std::cout << "Il y a " << Point::compte() << " points\n"; // Affiche : Il y a 4 points
    // delete pp;
    // std::cout << "Il y a " << Point::compte() << " points\n"; // Affiche : Il y a 3 points

    // Test des méthodes statiques distance() et milieu()
    // double distance = Point::distance(p1, p2);
    // std::cout << "La distance entre p1 et p2 est de " << distance << std::endl;

    // Point pointMilieu = Point::milieu(p1, p2);
    // std::cout << "Le point milieu entre p1 et p2 est ";
    // pointMilieu.affiche();

    // Test de la surcharge de l'opérateur de flux <<
    // std::cout << "P0 = " << p0 << std::endl;
    // std::cout << "P1 = " << p1 << std::endl;
    // std::cout << "P2 = " << p2 << std::endl;

    // Test de la surcharge de l'opérateur de flux >>
    // std::cout << "Entrez un point : ";
    // std::cin >> p0;
    // if (!std::cin)
    // {
    //     std::cout << "ERREUR de lecture !\n";
    //     return -1;
    // }
    // std::cout << "P0 = " << p0 << std::endl;

    // Test de la surcharge des opérateurs arithmétiques
    // std::cout << "P0 * 2 = " << p0 * 2 << std::endl;
    // std::cout << "2 * P0 = " << 2 * p0 << std::endl;
    // std::cout << "-P0 = " << -p0 << std::endl;
    // std::cout << "P0 + P1 = " << (p0 + p1) << std::endl;
    // std::cout << "P0 * P1 = " << (p0 * p1) << std::endl; // Produit scalaire

    // return 0;
}