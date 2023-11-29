#include <iostream>
using namespace std;

union Data
    {
        int entier;
        float decimal;
        char caractere;
    } init_data;


void fill_Data(int &entier, float &decimal,char &caractere,Data& data){
    data.entier=entier;
    data.decimal=decimal;
    data.caractere=caractere;
};

int main()
{
Data d;
cout << "Saisi des informations data \n" << endl;
cout << "Entrez l'entier : " << endl;
cin >> d.entier;
cout << "Entrez le decimal : " << endl;
cin >> d.decimal;
cout << "Entrez le caractere : " << endl;
cin >> d.caractere;
fill_Data(d.entier,d.decimal,d.caractere,d);
cout << "les informations de la data sont: \n" << "entier : "<< d.entier << " decimal : " << d.decimal <<" caractere : "<< d.caractere <<endl;
return 0;
}