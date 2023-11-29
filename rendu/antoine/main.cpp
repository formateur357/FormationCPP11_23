#include <iostream>
#include "Utilisateur.h"
#include <string>

using namespace std;

int main()
{	
	int age_user;
	string nom_user;
	string email_user;
	Utilisateur user1("Antoine", 25, "test@test.com");
	cout << user1.getAge() << endl;
	cout << user1.getNom() << endl;
	cout << user1.getEmail() << endl;

	cout << "test après set nom par exemple" << endl;

	user1.SetAge(35);

	cout << user1.getAge() << endl;

	return 0;
}
