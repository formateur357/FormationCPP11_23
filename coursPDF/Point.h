
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
};

#endif // POINT_H
