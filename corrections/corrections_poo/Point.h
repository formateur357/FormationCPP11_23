
#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point
{
private:
    double x, y;
    static int nbPoints; // Membre statique pour compter le nombre de points

public:
    Point();                   // Constructeur par défaut
    Point(double x, double y); // Constructeur avec paramètres
    ~Point();                  // Destructeur

    friend std::ostream &operator<<(std::ostream &out, const Point &point);
    friend std::istream &operator>>(std::istream &in, Point &point);

    Point operator*(double scalar) const;
    friend Point operator*(double scalar, const Point &point);
    Point operator-() const;
    Point operator+(const Point &other) const;
    double operator*(const Point &other) const;

    // Méthodes statiques
    static int compte(); // Retourne le nombre de points créés
    static double distance(const Point &p1, const Point &p2);

    static Point milieu(const Point &p1, const Point &p2);
};

#endif // POINT_H
