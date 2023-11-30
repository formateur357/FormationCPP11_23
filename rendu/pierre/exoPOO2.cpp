#include <iostream>
#include <string>

using namespace std;

class Utilisateur
{
private:
    string nom;
    int    age;
    string email;

public:
    // Constructeur
    Utilisateur(const string & nom = "",  int age = 0,  string & email = "") : nom(nom), age(age), email(email) {}
    
    // Destructeur
    ~Utilisateur() { cout << "l'objet Utilisateur '" << nom << "' est detruit" << endl; }

    //Getters
    string getNom() { return nom; }
    int    getAge() { return age; }
    string getEmail() { return email; }

    //Setters
    void setNom(string& pNom) { nom = pNom; }
    void setAge(int pAge) { (pAge > 0) ? age = pAge : cout << "Age negatif !!" << endl; }
    void setEmail(string& pEmail) { email = pEmail; }

    //Affichage
    void afficher() {
        cout << "Nom   Utilisateur : " << nom   << endl;
        cout << "Age   Utilisateur : " << age   << endl;
        cout << "Email Utilisateur : " << email << endl;
    }

};

int main()
{
    // Création d'un utilisateur
    Utilisateur utilisateur1;

    utilisateur1.afficher();

    utilisateur1.setAge(50);
    utilisateur1.setEmail("toto@titi.com");
    utilisateur1.setNom("toto");

    utilisateur1.afficher();

    cout << "Nom   Utilisateur : " << utilisateur1.getNom() << endl;
    cout << "Age   Utilisateur : " << utilisateur1.getAge() << endl;
    cout << "Email Utilisateur : " << utilisateur1.getEmail() << endl;

    return 0;
}