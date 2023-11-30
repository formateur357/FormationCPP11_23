#include <iostream>
#include "Rational.h"
#include <string>

using namespace std;

int main()
{	
	Rational frac1(3, 5);
	Rational frac2(2, 5);
	Rational frac3(frac1 + frac2);
	Rational frac4(frac1 - frac2);
	Rational frac5(frac1 * frac2);
	cout << frac3 << endl;
	cout << frac4 << endl;
	cout << frac5 << endl;


	return 0;
}
