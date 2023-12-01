#include <iostream>

template <typename T>
void print(T value)
{
    std::cout << value << std::endl;
}

template <typename T, typename... Args>
void print(T value, Args... args)
{
    std::cout << value << ", ";
    print(args...); // Appel récursif avec le reste des arguments
}

int main()
{
    print(1, 2.5, "Hello", 'a');
    return 0;
}