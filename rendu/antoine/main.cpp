#include <iostream>
#include <string>
#include <vector>

using namespace std;


void addNotes(vector<int> &v, int nbNotes)
{	int notes;
	for (int i = 0; i < nbNotes; i++)
	{
		cin >> notes;
		v.push_back(notes);
	}
}

float moyenne(vector<int> const &v)
{
	float s = 0;
	int i = 0;
	
	while (i < size(v))
	{
		s += v[i];
		i++;
	}
	return s / size(v);
}

void displayMax(vector<int> const& v)
{
	float max = 0;
	int i = 0;
	do
	{	
		max = v[i];
		i++;
	} while (v[i] > max);
	cout << max << endl;
}

int main()
{
	vector<int> v;
	int nbNotes = 5;
	char response = 'Y';
	do
	{
		
		char c;
		cin >> c;
		switch (c)
		{
		case 'A':
			addNotes(v, nbNotes);
			break;
		case 'B':
			if (size(v) > 0)
			{
				cout << moyenne(v) << endl;
			}
			else
				cout << "Tu dois d'abord rentrer des notes avant de pouvoir calculer la moyenne, tapes A pour cela" << endl;
			
			break;
		case 'C':
			if (size(v) > 0)
			{
				displayMax(v);
			}
			else
				cout << "Tu dois d'abord rentrer des notes avant de pouvoir afficher la note maximale, tapes A pour cela" << endl;
			
			break;
		default:
			cout << "choisissez un cas valide" << endl;
		}
		cout << "veux tu quitter le programme ? Y/N : " << endl;
		
		cin >> response;
	} while (response != 'Y');
	
	return 0;
}