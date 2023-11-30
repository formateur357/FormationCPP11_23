#include <iostream>
#include <vector>

using namespace std;

class Rational
{
private:
    int numerator;
    int denominator;

public:
    Rational(const int numerator = 0, const int denominator = 0)
    {
        this->numerator = numerator;
        if (denominator != 0)
        {
            this->denominator = denominator;
        }
        else
        {
            this->denominator = 1;
        }
    }
    friend ostream &operator<<(ostream &os, const Rational &rational)
    {
        os << rational.numerator << "/" << rational.denominator;
        return os;
    }
    friend Rational operator+(const Rational &left, const Rational &right)
    {
        Rational rational;
        rational.numerator = (left.numerator * right.denominator) + (right.numerator * left.denominator);
        rational.denominator = left.denominator * right.denominator;

        return rational;
    }
    friend Rational operator-(const Rational &left, const Rational &right)
    {
        Rational rational;
        rational.numerator = (left.numerator * right.denominator) - (right.numerator * left.denominator);
        rational.denominator = left.denominator * right.denominator;

        return rational;
    }
    friend Rational operator*(const Rational &left, const Rational &right)
    {
        Rational rational;
        rational.numerator = left.numerator * right.numerator;
        rational.denominator = left.denominator * right.denominator;

        return rational;
    }
    friend Rational operator/(const Rational &left, const Rational &right)
    {
        Rational rational;
        rational.numerator = left.numerator * right.denominator;
        rational.denominator = left.denominator * right.numerator;

        return rational;
    }
    friend bool operator==(const Rational &left, const Rational &right)
    {
        return (left.numerator / left.denominator) == (right.numerator / right.denominator);
    }
};

int main()
{

    Rational rational1(20, 4);
    cout << "l'operation rationnelle 1 est : " << rational1 << endl;

    Rational rational2(10, 2);
    cout << "l'operation rationnelle 2 est : " << rational2 << endl;

    Rational rational3(12, 2);
    cout << "l'operation rationnelle 3 est : " << rational3 << endl;

    if (rational1 == rational2)
    {
        cout << rational1 << " est égal à " << rational2 << endl;
    }
    else
    {
        cout << rational1 << " n'est pas égal à " << rational2 << endl;
    }

    if (rational1 == rational3)
    {
        cout << rational1 << " est égal à " << rational3 << endl;
    }
    else
    {
        cout << rational1 << " n'est pas égal à " << rational3 << endl;
    }

    cout << rational1 << " + " << rational2 << " = " << rational1 + rational2 << endl;
    cout << rational1 << " - " << rational2 << " = " << rational1 - rational2 << endl;
    cout << rational1 << " * " << rational2 << " = " << rational1 * rational2 << endl;
    cout << rational1 << " / " << rational2 << " = " << rational1 / rational2 << endl;

    return 0;
}