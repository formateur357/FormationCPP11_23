#include <iostream>
#include <string>

using namespace std;

struct Etudiant
{
    string name;
    int year;
};

struct Enseignant
{
    string name;
    string department;
};

union Personne
{
    Etudiant etudiant;
    Enseignant enseignant;
};

main()
{
    bool stopLoop = false;

    while (!stopLoop)
    {
        // Personne personne;
        // personne.etudiant.name = "Test";
    }

    return 0;
}
