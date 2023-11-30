#pragma once
#include <iostream>
using namespace std;

class Point {
private:
    double m_x, m_y;
    static int nbPoints; 

public:
    Point(); // Constructeur par défaut
    Point(double x, double y); // Constructeur avec paramètres
    ~Point(); // Destructeur
    const double getX();
    const double getY();
    void SetX(double x);
    void SetY(double y);
    friend ostream& operator<< (ostream& flux, Point const& point);
    friend istream& operator>> (istream& flux, Point& point);

    // Méthodes statiques
    static int compte(); // Retourne le nombre de points créés
};
