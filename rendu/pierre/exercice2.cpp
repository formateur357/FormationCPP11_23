#include <iostream>
#include <string>

using namespace std;

void saisir5Notes(int &tableau) {
  // saisie
  for (int i = 0; i < 5; i++) {
    cout << "Entrez la note de l'étudiant " << i + 1 << endl;
    cin >> tableau[i];
  }
}

int calculerMoyenne(int &tableau) {
  // calcul moyenne
  int sommeNotes = 0;
  int numEleve = 0;
  while (numEleve < 5) {
    sommeNotes += tableau[numEleve++];
  }
  int moyenne = sommeNotes / 5;

  return moyenne;
}

int renvoyerNoteMax(int &tableau) {
  // Utilisez une boucle do while pour trouver et afficher la note la plus
  // élevée.
  int numEleve = 0;
  int noteMax = 0;
  while (numEleve < 5) {
    if (tableau[numEleve++] > noteMax)
      noteMax = tableau[numEleve++];
  }
  cout << "La note la plus elevee est " << noteMax << endl;

  return noteMax;
}

int main() {
  int tableau[5];

  bool on_reste = true;

  // Menu Principal :
  cout << "Choisissez entre " << endl;
  cout << "1 : ajouter cinq notes " << endl;
  cout << "2 : calculer la moyenne " << endl;
  cout << "3 : afficher la note la plus élevée" << endl;
  cout << "4 : Quitter" << endl;

  cin >> reponse;

  while (on_reste) {
    switch (reponse) {
    case 1:
      saisir5Notes(tableau[0]);
      break;

    case 2:
      calculerMoyenne(tableau[0]);
      break;

    case 3:
      renvoyerNoteMax(tableau[0]);
      break;

    case 4:
      on_reste = false;
      break;

    default:
      cout << "Désolé, je ne connais pas cette unité " << unite << endl;
      break;
    }
  }
}