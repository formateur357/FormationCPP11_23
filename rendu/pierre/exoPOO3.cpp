#include <iostream>
#include <string>

using namespace std;

class Rational
{
private:
    int    numerator;
    int    denominator;

public:
    // Constructeur
    Rational(int numerator = 0,  int denominator = 1) : numerator(numerator), denominator(denominator) {}
    
    // Destructeur
    ~Rational() { cout << "l'objet Rational est detruit" << endl; }


    // Surcharge (ici ou extérieur ?)
    ostream & operator << (ostream & os, const Rational & p_rational)
    {
        os << p_rational.numerator << "/" << p_rational.denominator;
        return os;
    }

    bool operator == (const Rational &p_rational) // teste égalité fractions
    {
        if numerator   != p_rational.numerator   return false;
        if denominator != p_rational.denominator return false;
        return true;
    }

    friend Rational operator + (const Rational &p_rational1, const Rational &p_rational2); // additionne 2 fractions
    friend Rational operator - (const Rational &p_rational1, const Rational &p_rational2); // soustrait 2 fractions
    friend Rational operator * (const Rational &p_rational1, const Rational &p_rational2); // multiplie 2 fractions
    friend Rational operator / (const Rational &p_rational1, const Rational &p_rational2); // divise 2 fractions
 
};

Rational operator + (const Rational &p_rational1, const Rational &p_rational2)
{
    Rational result = p_rational1;
    result.numerator = (result.numerator * p_rational2.denominator) + (p_rational2.numerator * result.denominator);
    result.denominator = result.denominator * p_rational2.denominator;

    return result;
}

Rational operator - (const Rational &p_rational1, const Rational &p_rational2)
{
    Rational result = p_rational1;
    result.numerator = (result.numerator * p_rational2.denominator) - (p_rational2.numerator * result.denominator);
    result.denominator = result.denominator * p_rational2.denominator;

    return result;
}

Rational operator * (const Rational &p_rational1, const Rational &p_rational2)
{
    Rational result = p_rational1;
    result.numerator   = result.numerator   * p_rational2.numerator;
    result.denominator = result.denominator * p_rational2.denominator;

    return result;
}

Rational operator / (const Rational &p_rational1, const Rational &p_rational2)
{
    Rational result = p_rational1;
    result.numerator   = result.numerator   * p_rational2.denominator;
    result.denominator = result.denominator * p_rational2.numerator;

    return result;
}

int main()
{
    // Création d'un Rational
    Rational rational1(3,5), rational2(4,3), rationalResult;

    cout << rationalResult << endl;
    cout << rational1 << endl;
    cout << rational2 << endl;
    
    rationalResult = rational1 + rational2;
    cout << "addition : " << rationalResult << endl;

    rationalResult = rational1 - rational2;
    cout << "soustraction : " << rationalResult << endl;

    rationalResult = rational1 * rational2;
    cout << "multiplication : " << rationalResult << endl;

    rationalResult = rational1 / rational2;
    cout << "division : " << rationalResult << endl;

    return 0;
}