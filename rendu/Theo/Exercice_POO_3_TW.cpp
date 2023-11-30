#include <iostream>


using namespace std;


class Rational
{
private:
    int numerator;
    int denominator;

public:
    Rational(int numerator = 0, int denominator = 1) : numerator(numerator), denominator(denominator) {
        if (denominator == 0) {
            cout << "\le dénomiateur est égal à zéro" << endl;
        }
        cout << "\Creation de l'obet" << endl;
    }

    ~Rational() {
        cout << "\nDestruction de l'obet\n" << endl;
    }

    int getNumerator() const {
        return this->numerator;
    }

    void setNumerator(int new_numerator) {
        numerator = new_numerator ;
    }

    int getDenominator() const {
        return this->denominator;
    }

    void setDenominator(int new_denominator) {
        denominator = new_denominator;
    }

    //friend Rational operator << (const Rational& p);
    friend Rational operator -  (const Rational& p);
    friend Rational operator +  (const Rational& p1, const Rational& p2);
    friend Rational operator -  (const Rational& p1, const Rational& p2);
    friend Rational operator *  (const Rational& p1, const Rational& p2);
    friend Rational operator /  (const Rational& p1, const Rational& p2);
    friend Rational operator == (const Rational& p1, const Rational& p2);
};


ostream& operator << (ostream& os, const Rational& frac)
{
    os << frac.getNumerator() << "/" << frac.getDenominator();
    return os;
}


Rational operator - (const Rational& frac)
{
    Rational fracTmp = frac;
    fracTmp.numerator *= -1;
    //pTmp.denominator *= -1;
    return fracTmp;
}
Rational operator + (const Rational& frac1, const Rational& frac2)
{
    Rational fracTmp;
    fracTmp.numerator = (frac1.numerator * frac2.denominator) + (frac2.numerator * frac1.denominator);
    fracTmp.denominator = frac1.denominator * frac2.denominator;
    return fracTmp;
}
Rational operator - (const Rational& frac1, const Rational& frac2) 
{
    return frac1 + (-frac2);
}
Rational operator * (const Rational& frac1, const Rational& frac2)
{
    Rational fracTmp;
    fracTmp.numerator = frac1.numerator * frac2.numerator;
    fracTmp.denominator = frac1.denominator * frac2.denominator;
    return fracTmp;
}
Rational operator / (const Rational& frac1, const Rational& frac2)
{
    Rational fracTmp;
    fracTmp.numerator = frac1.numerator * frac2.denominator;
    fracTmp.denominator = frac1.denominator * frac2.numerator;
    return fracTmp;
}

Rational operator == (const Rational& frac1, const Rational& frac2)
{
    if ((frac2.numerator / frac1.numerator) == (frac2.denominator / frac1.denominator))
    {
        cout << "egalite" << endl;
    }
    else
    {
        cout << "non egalite" << endl;  // on peut les comparé avec un opérateur ternaire par exemple
    }
    return (frac2.numerator / frac1.numerator) == (frac2.denominator / frac1.denominator);
}



int main()
{
    /*Rational* Rational0 = new Rational();
    cout << "Numerator   : " << Rational0->getNumerator()   << endl;
    cout << "Denominator : " << Rational0->getDenominator() << endl;

    Rational0->setNumerator(10);
    Rational0->setDenominator(5);
    cout << "Nemerator   : " << Rational0->getNumerator() << endl;
    cout << "Denominator : " << Rational0->getDenominator() << endl;
    delete Rational0;*/

    Rational* Rational1 = new Rational();
    Rational1->setNumerator(2);
    Rational1->setDenominator(5);
    cout << "Fraction = " << Rational1 << endl;

    Rational* Rational2 = new Rational();
    Rational2->setNumerator(3);
    Rational2->setDenominator(4);
    cout << "Fraction = " << Rational2 << endl;



    delete Rational1;
    delete Rational2;
    return 0;
}




