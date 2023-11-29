#pragma once
#include <string>
using namespace std;
class Utilisateur
{
public:
	Utilisateur(string nom, int age, string email);
	~Utilisateur();
	const string getNom();
	const int getAge();
	const string getEmail();
	void SetNom(string nom);
	void SetAge(int age);
	void SetEmail(string email);

private:
	string m_nom;
	int m_age;
	string m_email;

};