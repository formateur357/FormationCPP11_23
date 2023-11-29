int main()
{
    // Création d'un compte avec le constructeur par défaut
    CompteBancaire compte1;
    compte1.afficherInfos();

    // Création d'un compte avec des informations spécifiques
    CompteBancaire compte2("Jean Dupont", "123456789");
    compte2.deposer(1000.0); // Dépôt d'argent
    compte2.retirer(200.0);  // Retrait d'argent
    compte2.afficherInfos(); // Affichage des informations

    return 0;
}