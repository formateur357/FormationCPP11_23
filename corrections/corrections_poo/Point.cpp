
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

std::istream &operator>>(std::istream &in, Point &point)
{
    char ch1, ch2, ch3;

    in >> ch1 >> point.x >> ch2 >> point.y >> ch3;
    if (ch1 != '<' || ch2 != ',' || ch3 != '>')
    {
        in.setstate(std::ios::failbit);
    }
    return in;
}

Point Point::operator*(double scalar) const
{
    return Point(x * scalar, y * scalar);
}

Point operator*(double scalar, const Point &point)
{
    return point * scalar;
}

Point Point::operator-() const
{
    return Point(-x, -y);
}

Point Point::operator+(const Point &other) const
{
    return Point(x + other.x, y + other.y);
}

double Point::operator*(const Point &other) const
{
    return x * other.x + y * other.y;
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