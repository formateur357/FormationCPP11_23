#include <iostream>
#include <chrono>

int sommeNonInline(int a, int b)
{
    return a + b;
}

inline int sommeInline(int a, int b)
{
    return a + b;
}

int main()
{
    const int N = 100000000;

    auto debutInline = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < N; i++)
    {
        sommeInline(i, i);
        sommeInline(i, i);
        sommeInline(i, i);
        sommeInline(i, i);
    }
    auto finInline = std::chrono::high_resolution_clock::now();

    auto debutNonInline = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < N; i++)
    {
        sommeNonInline(i, i);
        sommeNonInline(i, i);
        sommeNonInline(i, i);
        sommeNonInline(i, i);
    }
    auto finNonInline = std::chrono::high_resolution_clock::now();

    auto dureeNonInline = std::chrono::duration_cast<std::chrono::milliseconds>(finNonInline - debutNonInline).count();
    auto dureeInline = std::chrono::duration_cast<std::chrono::milliseconds>(finInline - debutInline).count();

    std::cout << "Temps d'execution (non inline): " << dureeNonInline << " ms/n" << std::endl;
    std::cout << "Temps d'execution (inline): " << dureeInline << " ms/n" << std::endl;
}