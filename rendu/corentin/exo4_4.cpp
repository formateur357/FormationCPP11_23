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
        struct etudiant *Etudiant;
        struct enseignant *Enseignant;
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
int type;
int nb_notes;
float note;
cout << "***** Saisi des informations ***** \n" << endl;
cout << "S'agit t'il d'un etudiant ou d'un enseignant ? 1 pour etudiant ou 2 pour enseignant\n"<<endl;
cin >> type;
if (type==1){
    pe.Etudiant=new etudiant;
    cout << "Entrez le nom : " << endl;
    cin >> pe.Etudiant->nom;
    cout << "Entrez l'age : " << endl;
    cin >> pe.Etudiant->age;
    cout << "Entrez le nombre de notes : " << endl;
    cin >> nb_notes;
    for(int i=0;i<nb_notes;i++){
        cout << "Entrez la note numero "<< i << endl;
        cin >> note;
        pe.Etudiant->notes.push_back(note);
    }
    cout << "la moyenne de l'eleve " << pe.Etudiant->nom << " age de " << pe.Etudiant->age << " ans est de : " << moyenne(pe.Etudiant->notes)<<endl;
}
else if (type==2){
    pe.Enseignant=new enseignant;
    cout << "Entrez le nom : " << endl;
    cin >> pe.Enseignant->nom;
    cout << "Entrez la matiere : " << endl;
    cin >> pe.Enseignant->matiere;
    cout << "l'enseignant " << pe.Enseignant->nom << " enseigne la matiere suivante : " << pe.Enseignant->matiere<<endl;
}
else
{
    cout<<"mauvais numero"<<endl;
    return 0;
}

return 0;
}