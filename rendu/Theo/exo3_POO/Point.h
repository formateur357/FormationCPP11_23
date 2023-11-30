#ifndef POINT_H
#define POINT_H

#include <iostream>


class Point {
private:
    double x, y;
    static int nbPoints; // Membre statique pour compter le nombre de points

public:
    Point(); // Constructeur par d�faut
    Point(double x, double y); // Constructeur avec param�tres
    ~Point(); // Destructeur

    // M�thodes statiques
    static int      compte   (); // Retourne le nombre de points cr��s
    static double   distance (const Point& p1, const Point& p2); // Retourne le nombre de points cr��s
    static Point    milieu   (const Point& p1, const Point& p2); // Retourne le nombre de points cr��s

    double   getX() const;
    void     setX(double new_x);

    double   getY() const;
    void     setY(double new_y);

    void  affiche();


    friend std::ostream& operator<<(std::ostream& out, const Point& point);
    friend std::istream& operator>>(std::istream& flux, const Point& point);

    friend Point operator +  (const Point& p1, const Point& p2);
    friend Point operator -  (const Point& p);
    friend Point operator -  (const Point& p1, const Point& p2);

    friend Point operator *  (const Point& p1, int valeur);
    friend Point operator *  (int valeur, const Point& p1);
    friend Point operator *  (const Point& p1, const Point& p2);
    
};



#endif // POINT_H