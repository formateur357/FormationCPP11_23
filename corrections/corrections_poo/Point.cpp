
#include "Point.h"
#include <cmath>

int Point::nbPoints = 0; // Initialisation du membre statique

// Constructeur par défaut
Point::Point() : x(0.0), y(0.0)
{
    ++nbPoints;
}

// Constructeur avec paramètres
Point::Point(double xVal, double yVal) : x(xVal), y(yVal)
{
    ++nbPoints;
}

// Destructeur
Point::~Point()
{
    --nbPoints;
}

std::ostream &operator<<(std::ostream &out, const Point &point)
{
    out << "<" << point.x << ", " << point.y << ">";
    return out;
}

// Méthode statique pour compter les points
int Point::compte()
{
    return nbPoints;
}

double Point::distance(const Point &p1, const Point &p2)
{
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    return std::sqrt(dx * dx + dy * dy);
}

Point Point::milieu(const Point &p1, const Point &p2)
{
    return Point((p1.x + p2.x) / 2, (p1.y + p2.y) / 2);
}