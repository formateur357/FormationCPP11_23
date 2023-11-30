#include "Point.h"
#include <iostream>
using namespace std;
int Point::nbPoints = 0; // Initialisation du membre statique

// Constructeur par défaut
Point::Point() : m_x(0.0), m_y(0.0)
{
    ++nbPoints;
}

// Constructeur avec paramètres
Point::Point(double xVal, double yVal) : m_x(xVal), m_y(yVal)
{
    ++nbPoints;
}

// Destructeur
Point::~Point()
{
    --nbPoints;
}

const double Point::getX()
{
    return m_x;
}

const double Point::getY()
{
    return m_y;
}

void Point::SetX(double x)
{
    this->m_x = x;
}

void Point::SetY(double y)
{
    this->m_y = y;
}

int Point::compte()
{
    return nbPoints;
}

ostream& operator<<(ostream& flux, Point const& point)
{
	
    flux << "<" << point.m_x << "," << point.m_y << ">" << endl;

	return flux;
}

istream& operator>>(istream& flux, Point& point)
{
    char chevronOuvert('<'), virgule(','), chevronFerme('>');
    double x, y;
    flux >> chevronOuvert;
   
    flux >> x >> virgule >> y;
    point.m_x = x;
    point.m_y = y;
    flux >> chevronFerme;

    return flux;
}
