#include "Point.h"
#include <iostream>
#include <math.h>

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

// Méthode statique pour calculer le milieux entre deux points
double Point::distance(const Point& p1, const Point& p2)
{
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}

// Méthode statique pour calculer la distance entre deux points
Point Point::milieu(const Point& p1, const Point& p2)
{
    Point PointTmp;
    PointTmp.x = p1.x + (p2.x - p1.x) / 2;
    PointTmp.y = p1.y + (p2.y - p1.y) / 2;
    return PointTmp;
}

// Méthode pour afficher
void Point::affiche()
{
    cout << this->x << endl;
    cout << this->y << endl;
}

double  Point::getX() const
{
    return this->x;
}
void    Point::setX(double new_x)
{
    x = new_x;
}
double  Point::getY() const
{
    return this->y;
}
void    Point::setY(double new_y) 
{
    y = new_y;
}

ostream& operator<<(ostream& os, const Point& p)
{
    os << "<" << p.getX() << "," << p.getY() << ">";
    return os;
}

istream& operator>>(istream& flux_entre, Point& pt)
{
    char ch1, ch2, ch3;
    double x_temp, y_temp;

    flux_entre >> ch1 >> x_temp >> ch2 >> y_temp >> ch3;
    pt.setX(x_temp);
    pt.setY(y_temp);

    if (ch1 != '<' || ch2 != ',' || ch3 != '>')
    {
        cout << "erreur";
    }
    return flux_entre;
}


Point operator -  (const Point& pt)
{
    Point ptTmp = pt;
    ptTmp.x *= -1;
    ptTmp.y *= -1;
    return ptTmp;
}
Point operator +  (const Point& pt1, const Point& pt2)
{
    Point ptTmp;
    ptTmp.x = pt1.x + pt2.x;
    ptTmp.y = pt1.y + pt2.y;
    return ptTmp;
}
Point operator -  (const Point& pt1, const Point& pt2)
{
    return pt1 + (-pt2);
}

Point operator *  (const Point& pt1, int valeur)
{
    Point ptTmp;
    ptTmp.x = valeur * pt1.x;
    ptTmp.y = valeur * pt1.y;
    return ptTmp;
}
Point operator *  (int valeur, const Point& pt1)
{
    Point ptTmp;
    ptTmp.x = valeur * pt1.x;
    ptTmp.y = valeur * pt1.y;
    return ptTmp;
}
Point operator *  (const Point& pt1, const Point& pt2)
{
    Point ptTmp;
    ptTmp.x = pt1.x * pt2.x;
    ptTmp.y = pt1.y * pt2.y;
    return ptTmp;
}  // attention j'ai pas fais de produit scalaire !!