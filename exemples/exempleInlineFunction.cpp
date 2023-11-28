#include <iostream>
#include <chrono>

#include <vector>

using namespace std;
using namespace std::chrono;

const int N = 100000000; // Nombre de fois que chaque fonction sera appelée
const int SIZE = 10;     // Taille des vecteurs

// Fonction non inline pour le produit scalaire
int produitScalaireNonInline(const vector<int> &a, const vector<int> &b)
{
    int somme = 0;
    for (int i = 0; i < SIZE; ++i)
    {
        somme += a[i] * b[i];
    }
    return somme;
}

// Fonction inline pour le produit scalaire
inline int produitScalaireInline(const vector<int> &a, const vector<int> &b)
{
    int somme = 0;
    for (int i = 0; i < SIZE; ++i)
    {
        somme += a[i] * b[i];
    }
    return somme;
}

int main()
{
    vector<int> vec1(SIZE, 1), vec2(SIZE, 2); // Deux vecteurs de test

    // Mesure du temps pour la fonction non inline
    auto debutNonInline = high_resolution_clock::now();
    for (int i = 0; i < N; ++i)
    {
        produitScalaireNonInline(vec1, vec2);
    }
    auto finNonInline = high_resolution_clock::now();

    // Mesure du temps pour la fonction inline
    auto debutInline = high_resolution_clock::now();
    for (int i = 0; i < N; ++i)
    {
        produitScalaireInline(vec1, vec2);
    }
    auto finInline = high_resolution_clock::now();

    // Calcul et affichage des durées
    auto dureeNonInline = duration_cast<milliseconds>(finNonInline - debutNonInline).count();
    auto dureeInline = duration_cast<milliseconds>(finInline - debutInline).count();

    cout << "Temps d'execution (non inline): " << dureeNonInline << " ms\n";
    cout << "Temps d'execution (inline): " << dureeInline << " ms\n";

    return 0;
}

// int sommeNonInline(int a, int b)
// {
//     return a + b;
// }

// inline int sommeInline(int a, int b)
// {
//     return a + b;
// }

// int main()
// {
//     const int N = 100000000;

//     auto debutInline = std::chrono::high_resolution_clock::now();
//     for (int i = 0; i < N; i++)
//     {
//         sommeInline(i, i);
//         sommeInline(i, i);
//         sommeInline(i, i);
//         sommeInline(i, i);
//     }
//     auto finInline = std::chrono::high_resolution_clock::now();

//     // auto debutNonInline = std::chrono::high_resolution_clock::now();
//     // for (int i = 0; i < N; i++)
//     // {
//     //     sommeNonInline(i, i);
//     //     sommeNonInline(i, i);
//     //     sommeNonInline(i, i);
//     //     sommeNonInline(i, i);
//     // }
//     // auto finNonInline = std::chrono::high_resolution_clock::now();

//     // auto dureeNonInline = std::chrono::duration_cast<std::chrono::milliseconds>(finNonInline - debutNonInline).count();
//     auto dureeInline = std::chrono::duration_cast<std::chrono::milliseconds>(finInline - debutInline).count();

//     // std::cout << "Temps d'execution (non inline): " << dureeNonInline << " ms/n" << std::endl;
//     std::cout << "Temps d'execution (inline): " << dureeInline << " ms/n" << std::endl;
// }