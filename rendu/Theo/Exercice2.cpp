#include <iostream>

using namespace std;

// Exercice 2

void AjoutNote(int TableauNote[], int indice) {
    int note = 0;
    do {
        cout << "\n" << "Quel est la note de l'eleve " << indice + 1 << " ?" << endl;
        cin >> note;
    } while (note < 0 || note > 20);
    TableauNote[indice] = note;
}

void NoteMax(int TableauNote[]) {
    int max = 0;
    int i = 0;

    while (i < 5) {
        if (max < TableauNote[i]){
            max = TableauNote[i];
        }
        i++;
    }
    cout << "\n" << "Note maximal : " << max << endl;
}

void Moyenne(int TableauNote[]) {
    int   valeur = 0;
    float valMoyenne;
    int i = 0;

    do {
        valeur = valeur + TableauNote[i];
        i++;
    } while (i < 5);

    valMoyenne = valeur / 5;
    cout << "\n" << "Moyenne : " << valMoyenne << endl;
}


int main() {
    int TableauNote[5] = { 0 };
    char choix;
    int test = 0;

    cout << "Que voulez-vous faire :\n a - ajouter les notes ? \n b - determination note max ? \n c - determination moyenne ? \n q - terminer ? ";
    cin >> choix;


    do {
        switch (choix)
        {
        case 'a':
            cout << "choix a";
            // création du tableau de note
            for (int indice = 0; indice < 5; indice++) {
                AjoutNote(TableauNote, indice);
                for (int i = 0; i < 5; i++) {
                    cout << TableauNote[i] << "\t";
                }
            }

            cout << "Que voulez-vous faire :\n a - ajouter les notes ? \n b - determination note max ? \n c - determination moyenne ? \n q - terminer ? ";
            cin >> choix;
            break;


        case 'b':
            cout << "choix b";
            // détermination note max
            NoteMax(TableauNote);

            cout << "Que voulez-vous faire :\n a - ajouter les notes ? \n b - determination note max ? \n c - determination moyenne ? \n q - terminer ? ";
            cin >> choix;
            break;


        case 'c':
            cout << "choix c";
            // détermination moyenne
            Moyenne(TableauNote);

            cout << "Que voulez-vous faire :\n a - ajouter les notes ? \n b - determination note max ? \n c - determination moyenne ? \n q - terminer ? ";
            cin >> choix;
            break;


        case 'q':
            // quiter
            test = 1;
            cout << "Vous avez décidez de quitter" << endl;
            break;


        default:
            cout << "Desole, je ne connais pas cette commande" << endl;

            cout << "Que voulez-vous faire :\n a - ajouter les notes ? \n b - determination note max ? \n c - determination moyenne ? \n q - terminer ? ";
            cin >> choix;
            break;
        }
    } while (choix != 'q');
    return 0;
}