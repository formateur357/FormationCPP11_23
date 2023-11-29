#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

float moyenne_notes(int tab[], int taille) {
	float moyenne=0;
	int i=0;
	while (taille > 0) {
		moyenne = moyenne + tab[i];
		i++;
		taille--;
	}
	moyenne = moyenne / i;
	cout << "la valeur moyenne des notes est " << moyenne << endl;
	return moyenne;
}

float note_max(int tab[]) {
	float max = 0;
	int i=0;
	do {
		cout << "la note max est : " << tab[i] << endl;
		max = tab[i];
		i++;
	} while (max<tab[i]);
	return max;
}

void menu_principal(){
	int choix;
	cout << "Que voulez vous faire ? (1) inserer les notes, (2) calcul de la moyenne, (3) note maximale" << endl;
	cin >> choix;
	switch (choix)
	{

	case '1':inserer_notes();

	case '2':moyenne_notes(notes, sizeof(notes));

	case '3':note_max(notes);
	}
}

int inserer_notes() {
	int notes[5];
	double moy;
	for (int i = 0; i < 5; i++) {
		printf("rentrer la note de l'etudiant numero %u\n", i);
		cin >> notes[i];
	}

	return 0;
}