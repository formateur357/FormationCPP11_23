#include <iostream>
using namespace std;

class Rational
{
private:
	int denominator;
	int numerator;
public:
	//Members declaration
	Rational(const int numerator, const int denominator) : numerator(numerator), denominator(denominator) {}
	//  ***** DESTRUCTOR ***** 
	~Rational() {
		cout << "deletion :" << this << endl;
	};
	//  ***** GETTERS *****

	//  ***** METHODS *****
	friend Rational operator << (const Rational& R1, const Rational& R);
	friend Rational operator + (const Rational& R1, const Rational& R2);
	friend Rational operator - (const Rational& R1, const Rational& R2);
	friend Rational operator / (const Rational& R1, const Rational& R2);
	friend Rational operator * (const Rational& R1, const Rational& R2);
	friend Rational operator == (const Rational& R1, const Rational& R2);

}
ostream& operator << (ostream& sortie, const Rational& R1)
{
	if (R1.denominator != 0) {
		sortie << R1.numerator << "/" << R2.denominator << endl;
		return sortie;
	}
	else {
		cout << "denominator should not be 0" << endl;
		return false;
	}
}

Rational operator + (const Rational& R1, const Rational& R2)
{
	Rational R;
	R.numerator = R1.numerator*R2.denominator + R2.numerator*R1.denominator;
	R.denominator=R1.denominator*R2.denominator;
	return R;
}

Rational operator - (const Rational& R1, const Rational& R2)
{
	Rational R;
	R.numerator = R1.numerator * R2.denominator - R2.numerator * R1.denominator;
	R.denominator = R1.denominator * R2.denominator;
	return R;
}

Rational operator / (const Rational& R1, const Rational& R2)
{
	Rational R;
	R.numerator = R1.numerator * R2.denominator;
	R.denominator = R1.denominator * R2.numerator;
	return R;
}

Rational operator * (const Rational& R1, const Rational& R2)
{
	Rational R;
	R.numerator = R1.numerator * R2.numerator;
	R.denominator = R1.denominator * R2.denominator;
	return R;
}

bool Rational::operator == (const Rational& R1, const Rational& R2)
{
	if (R1.denominator != R2.denominator) { return false };
	else if (R1.numerator != R2.numerator) { return false };
	else { return true };
}

int main()
{
    Rational somme,soustraction,division,multiplication;
    Rational Rat1(2,3);
    Rational Rat2(4,5);
    cout<<Rat1<<Rat2<<endl;
    somme=Rat2+Rat2;
    cout<<somme<<endl;
    soustraction=Rat1-Rat2;
    cout<<soustraction<<endl;
    division=Rat1/Rat2;
    cout<<division<<endl;
    multiplication=Rat1*Rat2;
    cout<<multiplication<<endl;
	return 0;
}