#pragma once
#include <iostream>
using namespace std;
class Rational
{
private:
	signed int m_numerateur;
	int m_denominateur;

public:
	Rational(signed int numerateur, int m_denominateur);
	Rational(signed int numerateur);
	friend Rational operator+(Rational const& a, Rational const& b);
	friend Rational operator-(Rational const& a, Rational const& b);
	friend Rational operator*(Rational const& a, Rational const& b);
	friend Rational operator/(Rational const& a, Rational const& b);
	friend Rational operator==(Rational const& a, Rational const& b);
	friend ostream& operator<< (ostream& flux, Rational const& frac);
};