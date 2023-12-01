#include "SwapFunction.h"
#include "ArrayTemplate.h"
#include <string>

int main()
{
    // Test de la fonction swap
    int x = 5, y = 10;
    std::cout << "Avant swap : x = " << x << ", y = " << y << std::endl;
    swap(x, y);
    std::cout << "Après swap : x = " << x << ", y = " << y << std::endl;

    // Test de la classe template Array
    Array<std::string, 3> strArray;
    strArray.set(0, "Hello");
    strArray.set(1, "World");
    strArray.set(2, "!");
    strArray.display();

    return 0;
}