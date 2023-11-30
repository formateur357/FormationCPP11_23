
#include "Point.h".
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

ostream & operator << (ostream & os, const Point & p_point)
{
    os << "<" <<  p_point.x << "," << p_point.y << ">" << endl;
    return os;
}

istream & operator >> (istream & is, Point & p_point)
{
    char c;
    if ((c = is.get()) == ’<’)
        is >> p.x;
    else
        is.clear(ios::failbit);
    if ((c = is.get()) == ’,’)
        is >> p.y;
    else
        is.clear(ios::failbit);
    if (is.eof() || ((c = is.get()) != ’>’)) is.clear(ios::failbit);
    if (is.eof()) is.clear(ios::failbit);
    if (! is)
    {
        p.x = 0.;
        p.y = 0.;
    }
    return is;
}

// Méthode statique pour compter les points
int Point::compte()
{
    return nbPoints;
}

// Méthode statique pour calculer la distance entre 2 points
 double Point::getDistance(Point& p1, Point& p2)
 {
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    return std::sqrt(dx * dx + dy * dy);    
 }

 // Méthode statique pour calculer le milieu entre 2 points
 Point Point::pointMilieu(Point& p1, Point& p2)
 {    
    return Point((p1.x + p2.x) / 2, (p1.y + p2.y) / 2);
 }

Point operator * (double p_facteur, const Point &p_Point);
{
    Point result = p_point;
    p_point.x *= p_facteur;
    p_point.y *= p_facteur;
    
    return result;
}
   
Point operator + (const Point &p_Point2) {
    x += p_Point2.x;
    y += p_Point2.y;
    return *this;
}
Point operator - (const Point &p_Point2) {
    x -= p_Point2.x;
    y -= p_Point2.y;
    return *this;
}
Point operator - () {
    x *= -1;
    y *= -1;
    return *this;
}
Point operator * (double p_facteur)
{
    x *= p_facteur;
    y *= p_facteur;
    return *this;
}
double operator * (const Point &p_Point1)
{
    return (x * p_Point1.x) + (y*p_Point1.y);
}   
