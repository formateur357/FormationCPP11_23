#include "Rational.h"
#include <iostream>
using namespace std;

Rational::Rational(signed int numerateur, int denominateur) : m_numerateur(numerateur), m_denominateur(denominateur)
{
	if (m_denominateur == 0) {
		cout << "fraction non définie" << endl;
	}

}

Rational::Rational(signed int numerateur) : m_numerateur(numerateur), m_denominateur(1)
{
}

Rational operator+(Rational const& a, Rational const& b)
{	
	
	return Rational(a.m_numerateur * b.m_denominateur + b.m_numerateur * a.m_denominateur, a.m_denominateur * b.m_denominateur );
}

Rational operator-(Rational const& a, Rational const& b)
{	
	
	return Rational(a.m_numerateur * b.m_denominateur - b.m_numerateur * a.m_denominateur, a.m_denominateur * b.m_denominateur);
}

Rational operator*(Rational const& a, Rational const& b)
{
	return Rational(a.m_numerateur * b.m_numerateur, a.m_denominateur * b.m_denominateur);
}

Rational operator/(Rational const& a, Rational const& b)
{	
	return Rational(a.m_numerateur * b.m_denominateur, a.m_denominateur * b.m_numerateur);
}

Rational operator==(Rational const& a, Rational const& b)
{	

	return (a.m_numerateur == b.m_numerateur && a.m_denominateur, a.m_numerateur);
}

ostream& operator<<(ostream& flux, Rational const& frac)
{
	flux << frac.m_numerateur << "/" << frac.m_denominateur << endl;
	return flux;
}


