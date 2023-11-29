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
        etudiant etudiant;
        enseignant enseignant;
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


int main()
{
etudiant e;
enseignant p;
personne pe;
int type;
int nb_notes;
float note;
cout << "***** Saisi des informations ***** \n" << endl;
cout << "S'agit t'il d'un etudiant ou d'un enseignant ? 1 pour etudiant ou 2 pour enseignant\n"<<endl;
cin >> type;
if (type==1){
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
}
if (type==2){

}
else{
    cout<<"mauvais numero"<<endl;
    return 0;
}

return 0;
}