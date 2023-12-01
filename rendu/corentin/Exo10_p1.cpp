#include <iostream>
using namespace std;

template <typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int intA = 1, intB = 2;
    cout << "Avant échange - intA: " << intA << ", intB: " << intB << endl;
    swap(intA, intB);
    cout << "Après échange - intA: " << intA << ", intB: " << intB << endl;

    double doubleA = 1.1, doubleB = 2.2;
    cout << "Avant échange - doubleA: " << doubleA << ", doubleB: " << doubleB << endl;
    swap(doubleA, doubleB);
    cout << "Après échange - doubleA: " << doubleA << ", doubleB: " << doubleB << endl;

    string stringA = "Bonjour", stringB = "Au revoir";
    cout << "Avant échange - stringA: " << stringA << ", stringB: " << stringB << endl;
    swap(stringA, stringB);
    cout << "Après échange - stringA: " << stringA << ", stringB: " << stringB << endl;

    return 0;
}
