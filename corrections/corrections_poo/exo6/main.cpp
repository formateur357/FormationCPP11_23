#include "swapFunction.h"
#include "arrayTemplate.h"
#include <string>

int main()
{
    // Test de la fonction swap
    double x = 5.0, y = 10.0;
    std::cout << "Avant swap : x = " << x << ", y = " << y << std::endl;
    swap(x, y);
    std::cout << "Après swap : x = " << x << ", y = " << y << std::endl;

    // Test de la classe template Array
    Array<std::string, 3> strArray;
    strArray.set(0, "Hello");
    strArray.set(1, "World");
    strArray.set(0, "Goodbye");
    strArray.set(2, "!");
    std::cout << strArray.get(0) << std::endl;
    strArray.display();

    return 0;
}