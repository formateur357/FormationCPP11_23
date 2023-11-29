#include <iostream>
#include <vector>

using namespace std;

void ajouterNotes(vector<double> &notes)
{
    double note;

    for (int i = 0; i < 5; i++)
    {
        cout << "Entrez la note de l'etudiant " << i + 1 << ": ";
        cin >> note;

        while (!cin)
        {
            cout << "Entree invalide. Veuillez entrer un nombre: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> note;
        }

        notes.push_back(note);
    }
}

double calculerMoyenne(const vector<double> &notes)
{
    double somme = 0.0;
    int i = 0;

    while (i < notes.size())
        somme += notes[i++];

    return somme / notes.size();
}

double trouverMax(const vector<double> &notes)
{
    double max = notes[0];
    int i = 1;

    do
    {
        if (notes[i] > max)
            max = notes[i];
        ++i;
    } while (i < notes.size());

    return max;
}

int main()
{
    vector<double> notes;
    bool continuer = true;
    int choix;

    while (continuer)
    {
        cout << "\nMenu\n";
        cout << "1. Ajouter des notes\n";
        cout << "2. Calculer la moyenne\n";
        cout << "3. Trouver la note la plus elevee\n";
        cout << "4. Quitter\n\n";
        cout << "Entrez votre choix: ";

        cin >> choix;

        switch (choix)
        {
        case 1:
            ajouterNotes(notes);
            break;

        case 2:
            if (!notes.empty())
            {
                cout << "\nLa moyenne est: " << calculerMoyenne(notes) << endl;
            }
            else
            {
                cout << "\nAucune note n'est enregistree." << endl;
            }
            break;

        case 3:
            if (!notes.empty())
            {
                cout << "\nLa note la plus elevee est: " << trouverMax(notes) << endl;
            }
            else
            {
                cout << "\nAucune note n'est enregistree." << endl;
            }
            break;

        case 4:
            continuer = false;
            break;

        default:
            cout << "\nChoix invalide. Veuillez reessayer." << endl;
            break;
        }
    }

    return 0;
}