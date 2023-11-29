#include "Utilisateur.h"
#include <iostream>

Utilisateur::Utilisateur(string nom, int age, string email) : m_nom(nom),m_age(age), m_email(email)
{

}

Utilisateur::~Utilisateur()
{
	cout << "objet detruit" << endl;
}

const string Utilisateur::getNom()
{
	return m_nom;
}

const int Utilisateur::getAge()
{
	return m_age;
}

const string Utilisateur::getEmail()
{
	return m_email;
}

void Utilisateur::SetNom(string nom)
{
	this->m_nom = nom;
}

void Utilisateur::SetAge(int age)
{
	this->m_age = age;
}

void Utilisateur::SetEmail(string email)
{
	this->m_email = email;
}

