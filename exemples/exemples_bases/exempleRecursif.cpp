#include <iostream>

long long factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    long long fact = factorial(number);
    std::cout << "Factorial of " << number << " is " << fact << std::endl;

    return 0;
}