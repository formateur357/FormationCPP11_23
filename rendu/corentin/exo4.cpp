#include <iostream>
#include <vector>
using namespace std;

struct etudiant
    {
        string nom;
        int age;
        vector<float> notes;
    } numero;

void struct_etudiant(string &nom, int &age,const vector<float> &notes,etudiant& eleve){
    eleve.nom=nom;
    eleve.age=age;
    eleve.notes=notes;
};

double moyenne(const vector<float> &notes){
    double somme;
    for(int i=0;i<notes.size();i++){
        somme+=notes[i];
    }
    return somme/notes.size();
}

int main()
{
etudiant e;
int nb_notes;
float note;
cout << "Saisi des informations etudiant \n" << endl;
cout << "Entrez le nom : " << endl;
cin >> e.nom;
cout << "Entrez l'age : " << endl;
cin >> e.age;
cout << "Entrez le nombre de notes : " << endl;
cin >> nb_notes;
for(int i=0;i<nb_notes;i++){
    cout << "Entrez la note numero "<< i << endl;
    cin >> note;
    e.notes.push_back(note);
}
cout << "la moyenne de l'eleve " << e.nom << " age de " << e.age << " ans est de : " << moyenne(e.notes)<<endl;
return 0;
}