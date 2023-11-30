#include "Point.h"
#include <cmath>
#include <iostream>

using namespace std;

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

// Méthode statique pour compter les points
int Point::compte()
{
    return nbPoints;
}

double Point::distance(const Point &point1, const Point &point2)
{
    return sqrt(pow(point2.x - point1.x, 2) + pow(point2.y - point1.y, 2));
}

Point Point::milieu(const Point &point1, const Point &point2)
{
    Point Point;
    Point.x = (point1.x + point2.x) / 2;
    Point.y = (point1.y + point2.y) / 2;

    return Point;
}
Point Point::operator*(double value)
{
    Point point((this->x * value), (this->y * value));
    return point;
}

ostream &operator<<(ostream &os, const Point &point)
{
    os << "<" << point.x << "," << point.y << ">";
    return os;
}

istream &operator>>(istream &is, Point &point)
{
    char c;

    if ((c = is.get()) == '<')
        is >> point.x;
    else
        is.clear(ios::failbit);
    if ((c = is.get()) == ',')
        is >> point.y;
    else
        is.clear(ios::failbit);
    if (is.eof() || ((c = is.get()) != '>'))
        is.clear(ios::failbit);
    if (is.eof())
        is.clear(ios::failbit);
    if (!is)
    {
        point.x = 0.;
        point.y = 0.;
    }
    return is;
}
