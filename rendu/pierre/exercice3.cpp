#include <iostream>
#include <stdarg.h>
#include <vector>

using namespace std;

void ajouterNotes(vector<double> &notes) {
  double note;

  for (int i = 0; i < 5; i++) {
    cout << "Entrez la note de l'etudiant " << i + 1 << ": ";
    cin >> note;

    while (!cin) {
      cout << "Entree invalide. Veuillez entrer un nombre: ";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cin >> note;
    }

    notes.push_back(note);
  }
}

double calculerMoyenne(const vector<double> &notes) {
  double somme = 0.0;
  int i = 0;

  while (i < notes.size())
    somme += notes[i++];

  return somme / notes.size();
}



double trouverMax(const vector<double> &notes) {
  double max = notes[0];
  int i = 1;

  do {
    if (notes[i] > max)
      max = notes[i];
    ++i;
  } while (i < notes.size());

  return max;
}

double calculerMoyenne(int nbArg, ...) {
  int somme = 0.0;
  int i = 0;

  va_list varg;           /* Variable identifiant le prochain paramètre */
  va_start(varg, nbArg); /* Initialisation de la liste */
  /* Parcours de la liste */
  while (nbArg != 0) {
    somme = somme + va_arg(varg, int); /* récupère le prochain
    paramètre dans la liste */
    nbArg = nbArg - 1;
  }

  va_end(varg);
  return double (somme) / nbArg;
}

int main() {

  printf("Moyenne de 1, 2, 3: %f\n", calculerMoyenne(3, 1, 2, 3));
  printf("Moyenne de 4, 5, 6, 7, 8: %f\n", calculerMoyenne(5, 4, 5, 6, 7, 8));

  return 0;
}