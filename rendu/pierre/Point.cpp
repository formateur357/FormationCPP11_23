
#include "Point.h"

int Point::nbPoints = 0; // Initialisation du membre statique

class Point {

    public:

    // Surcharge
    //friend Point operator + (const Point &p_Point1, const Point &p_Point2); 
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

    ostream & operator << (ostream & os, const Point & p_point)
    {
        os << "<" <<  p_point.x << "," << p_point.y << ">" << endl;;
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

}

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

// Méthode statique pour calculer la distance entre 2 points
 double Point::getDistance(Point& p1, Point& p2)
 {
    return ((p2.x - p1.x)*(p2.x - p1.x)) + ((p2.y - p1.y)*(p2.y - p1.y));
    //return sqr(p2.x - p1.x) + sqr(p2.y - p1.y);
 }

 // Méthode statique pour calculer le milieu entre 2 points
 Point Point::pointMilieu(Point& p1, Point& p2)
 {
    Point pointMilieu;

    if (p2.x > p1.x) 
    {
        pointMilieu.x = p2.x - p1.x;
    }
    else
    {
        pointMilieu.x = p1.x - p2.x;
    }
    
    if (p2.y > p1.y) 
    {
        pointMilieu.y = p2.y - p1.y;
    }
    else
    {
        pointMilieu.y = p1.y - p2.y;
    }  
    
    return pointMilieu;    
 }

Point operator * (double p_facteur, const Point &p_Point);
{
    Point result = p_point;
    p_point.x *= p_facteur;
    p_point.y *= p_facteur;
    
    return result;
}
