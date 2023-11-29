#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Utilisateur
{
private:
    string nom;
    int age;
    string email;
public:
    //Members declaration
    Utilisateur(const string &nom = "", const int &age = 0, const string &email = "") : nom(nom), age(age), email(email) {}
//  ***** DESTRUCTOR ***** 
    ~Utilisateur(){
        cout<<"deletion :"<<this<<endl;
    };
//  ***** GETTERS *****
    string getNom() const
    {
        return nom;
    }
    int getAge() const
    {
        return age;
    }
    string getEmail() const
    {
        return email;
    }
    //  ***** SETTERS *****
    void setNom(string set_nom);
    void setAge(int set_age);
    void setEmail(string set_email);
    //  ***** DISPLAY *****
    void afficher() const
    {
        cout << "Nom: " << nom << endl;
        cout << "Age: " << age << endl;
        cout << "Email: " << email << endl;
    }
};

// Utilisateur::Utilisateur(const Utilisateur &U)
// {
//     nom = U.nom; 
//     age = U.age;
//     email = U.email;
// }

void Utilisateur::setAge(int set_age){
    if(set_age>0){
    age=set_age;
    }
    else{
        cout<<"L'age ne peut pas être nul ou negatif"<<endl;
    }
}
void Utilisateur::setNom(string set_nom){
    nom=set_nom;
}
void Utilisateur::setEmail(string set_email){
    email=set_email;
}

// Utilisateur::~Utilisateur(){
//     delete nom;
//     delete age;
//     delete []email;
// }

int main()
{
    // Création d'un utilisateur 1
    Utilisateur user1;
    cout << "utilisateur 1:"<<endl;
    user1.afficher();
    string n,e;
    int a;

    // Création d'un utilisateur 2
    Utilisateur user2("Jean Dupont", 36, "Jean@Dupont.fr");
    cout << "utilisateur 2:"<<endl;
    user2.afficher();                       // afficher
    a=user2.getAge();
    n=user2.getNom();
    e=user2.getEmail();
    cout<<"test des getters:\n"<<"Nom : "<<n<<endl;
    cout<<"Age : "<<a<<endl;
    cout<<"Email : "<<e<<endl;
    user2.setAge(6);
    user2.setNom("Jojo");
    user2.setEmail("Jojo@mail.com");
    cout << "utilisateur 2 apres modification:"<<endl;
    user2.afficher();

    return 0;
}