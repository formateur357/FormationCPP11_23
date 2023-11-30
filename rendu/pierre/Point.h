
#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x, y;
    static int nbPoints; // Membre statique pour compter le nombre de points

public:
    Point(); // Constructeur par défaut
    Point(double x, double y); // Constructeur avec paramètres
    ~Point(); // Destructeur

    // Méthodes statiques
    static int compte(); // Retourne le nombre de points créés
    static double getDistance(const Point& p1, const Point& p2); // Retourne la distance entre 2 points
    static Point pointMilieu(const Point& p1, const Point& p2); // Retourne la milieu entre 2 points

    // Surcharge
    //friend Point operator + (const Point &p_Point1, const Point &p_Point2); 
    Point operator + (const Point &p_Point2);
    Point operator - (const Point &p_Point2);
    Point operator - ();
    Point operator * (double p_facteur);
    double operator * (const Point &p_Point1);
    friend Point operator * (double p_facteur, const Point &p_Point1); // 
    
    friend ostream & operator << (ostream & os, const Point & p_point);
    friend istream & operator >> (istream & is, Point & p_point);
}

#endif // POINT_H
