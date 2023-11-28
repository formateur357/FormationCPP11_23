int maFonction(int a, float b)
{
    // ...
    return quelqueChose;
}

int main()
{
    int (*pf)(int, float) = maFonction;
    int resultat = pf(5, 3.2f); // Appel de maFonction via le pointeur
    // ...
}