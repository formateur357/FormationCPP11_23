#include <iostream>
#include <vector>
using namespace std;

struct etudiant
    {
        string nom;
        int age;
        vector<float> notes;
    } init_etudiant;

struct enseignant
    {
        string nom;
        string matiere;
    } init_enseignant;

union personne
    {
        typedef etudiant itEtudiant;
        typedef enseignant Enseignant;
    } init_personne;

void struct_etudiant(string &nom, int &age,const vector<float> &notes,etudiant& eleve){
    eleve.nom=nom;
    eleve.age=age;
    eleve.notes=notes;
};

void struct_enseignant(string &nom, string matiere,enseignant& prof){
    prof.nom=nom;
    prof.matiere=matiere;
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
personne pe;
etudiant e;
enseignant p;
int type;
int nb_notes;
float note;
cout << "***** Saisi des informations ***** \n" << endl;
cout << "S'agit t'il d'un etudiant ou d'un enseignant ? 1 pour etudiant ou 2 pour enseignant\n"<<endl;
cin >> type;
if (type==1){
    cout << "Entrez le nom : " << endl;
    cin >> pe.etudiant.nom;
    cout << "Entrez l'age : " << endl;
    cin >> pe.etudiant.age;
    cout << "Entrez le nombre de notes : " << endl;
    cin >> nb_notes;
    for(int i=0;i<nb_notes;i++){
        cout << "Entrez la note numero "<< i << endl;
        cin >> note;
        pe.etudiant.notes.push_back(note);
    }
    cout << "la moyenne de l'eleve " << pe.etudiant.nom << " age de " << pe.etudiant.age << " ans est de : " << moyenne(pe.etudiant.notes)<<endl;
}
if (type==2){
    cout << "Entrez le nom : " << endl;
    cin >> pe.enseignant.nom;
    cout << "Entrez la matiere : " << endl;
    cin >> pe.enseignant.matiere;
    cout << "l'enseignant' " << pe.enseignant.nom << " enseigne la matiere suivante : " << pe.enseignant.matiere<<endl;
}
else{
    cout<<"mauvais numero"<<endl;
    return 0;
}

return 0;
}