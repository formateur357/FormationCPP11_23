#include <iostream>

using namespace std;

class Rational
{
private:
    int numerator;
    int denominator;

    void reduce()
    {
        int gcd = findGCD(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
    }

    int findGCD(int a, int b)
    {
        return b == 0 ? a : findGCD(b, a % b);
    }

public:
    Rational(int numerator, int denominator) : numerator(numerator), denominator(denominator)
    {
        if (denominator == 0)
        {
            throw invalid_argument("Le denominateur ne peut pas etre zero.");
        }
        reduce();
    }

    friend Rational operator+(const Rational &r1, const Rational &r2)
    {
        return Rational(r1.numerator * r2.denominator + r2.numerator * r1.denominator, r1.denominator * r2.denominator);
    }

    friend Rational operator-(const Rational &r1, const Rational &r2)
    {
        return Rational(r1.numerator * r2.denominator - r2.numerator * r1.denominator, r1.denominator * r2.denominator);
    }

    friend Rational operator*(const Rational &r1, const Rational &r2)
    {
        return Rational(r1.numerator * r2.numerator, r1.denominator * r2.denominator);
    }

    friend Rational operator/(const Rational &r1, const Rational &r2)
    {
        return Rational(r1.numerator * r2.denominator, r1.denominator * r2.numerator);
    }

    friend bool operator==(const Rational &r1, const Rational &r2)
    {
        return r1.numerator == r2.numerator && r1.denominator == r2.denominator;
    }

    friend ostream &operator<<(ostream &os, const Rational &r)
    {
        os << r.numerator << "/" << r.denominator;
        return os;
    }
};

int main()
{
    Rational r1(1, 2);
    Rational r2(1, 0);

    std::cout << r1 << " + " << r2 << " = " << r1 + r2 << std::endl;
    std::cout << r1 << " - " << r2 << " = " << r1 - r2 << std::endl;
    std::cout << r1 << " * " << r2 << " = " << r1 * r2 << std::endl;
    std::cout << r1 << " / " << r2 << " = " << r1 / r2 << std::endl;
    std::cout << r1 << " == " << r2 << " = " << (r1 == r2 ? "true" : "false") << std::endl;

    return 0;
}