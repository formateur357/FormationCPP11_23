#include <iostream>

using namespace std;

// Ctrl / ou Ctrl K Ctrl C puis Ctrl K Ctrl U pour decommenter
// Commentaire de ligne

/* commentaire sur
plusieurs lignes*/

// int main() {
//     std::cout << "Version de C++ : " << __cplusplus << std::endl;
//     return 0;
//     cout << "Hello world !\n"; // Affiche "Hello world !"
//     return 0;
// }

typedef int entier;
typedef float reel;

enum class Boolean : bool
{
    FALSE,
    TRUE
};

// enum class MonEnum : unsigned char
// {
//     Valeur1,
//     Valeur2,
//     Valeur3
// };

enum couleur_carte
{
    TREFLE = 1, /* un énumérateur */
    CARREAU,    /* 1+1 donc CARREAU = 2 */
    COEUR = 4,  /* en C, les énumérateurs sont équivalents à des entiers (int) */
    PIQUE = 8   /* il est possible de choisir explicitement les valeurs (ou de certaines d’ entre elles). */
};

enum JourDeSemaine
{
    LUNDI,
    MARDI,
    MERCREDI,
    JEUDI,
    VENDREDI,
    SAMEDI,
    DIMANCHE
};

int main()
{
    entier e = 1;
    reel r = 2.5;
    Boolean fini = Boolean::FALSE;
    enum couleur_carte carte = CARREAU;
    printf("Le nouveau type entier possède une taille de %lu octets (ou %lu bits)\n", sizeof(entier), sizeof(entier) * 8);
    printf("La variable e a pour valeur %d et occupe %lu octets\n", e, sizeof(e));
    printf("La variable r a pour valeur %.1f et occupe %lu octets\n", r, sizeof(r));
    cout << "La variable fini a pour valeur " << static_cast<bool>(fini) << " et occupe " << sizeof(fini) << " octets\n";
    printf("La variable carte a pour valeur %d et occupe %lu octets\n", carte, sizeof(carte));
    return 0;
}