#include <iostream>
#include <string>
using namespace std;


// Classe MathException
class MathException : public exception {
private:
    string messageerreur;
public:
    MathException(const string& message): messageerreur(message) {}

    const char* what() const noexcept override {
        return messageerreur.c_str();
    }
};

class Calculatrice{
public:
    double addition(double a,double b){
        return a+b;
    }
    double soustraction(double a,double b){
        return a-b;
    }
    double multiplication(double a,double b){
        return a*b;
    }
    double division(double a,double b){
        if(b==0){
            throw MathException("Erreur : Division par zero.");
        }
        return a/b;
    }
};

int main() {
    Calculatrice cal;
    try {
        double Addition = cal.addition(1,2);
        cout << "Addition : " << Addition << endl;
        double Soustraction = cal.soustraction(1,2);
        cout << "Soustraction : " << Soustraction << endl;
        double Multiplication = cal.multiplication(3,4);
        cout << "Multiplication : " << Multiplication << endl;
        double Division = cal.division(5,6);
        cout << "Division : " << Division << endl;

        // Division par zero
        double divisionzero = cal.division(1,0);

    } catch (const MathException& except) {
        cout << "Erreur math : " << except.what() << endl;
    } catch (const exception& except) {
        cout << "Erreur : " << except.what() << endl;
    }

    return 0;
}