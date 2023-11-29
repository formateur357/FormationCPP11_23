#include <iostream>
#include "CompteBancaire.h"
#include <string>

using namespace std;

int main()
{
	CompteBancaire compte("Antoine", 1234, 10000) ;
	
	compte.AddMoney(1000.0);
	compte.RetireMoney(500.0);
	compte.DisplayInfo();
	compte.DisplaySolde();
	

	return 0;
}
