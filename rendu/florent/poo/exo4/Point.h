#include <iostream>
using namespace std;

#ifndef POINT_H
#define POINT_H

class Point
{
private:
    double x, y;
    static int nbPoints; // Membre statique pour compter le nombre de points

public:
    Point();                   // Constructeur par défaut
    Point(double x, double y); // Constructeur avec paramètres
    ~Point();                  // Destructeur

    // Méthodes statiques
    static int compte(); // Retourne le nombre de points créés
    static double distance(const Point &point1, const Point &point2);
    static Point milieu(const Point &point1, const Point &point2);
    void affiche();
    friend ostream &operator<<(ostream &os, const Point &point);
    friend istream &operator>>(istream &is, Point &point);
    Point operator*(double value);
};

#endif // POINT_H
