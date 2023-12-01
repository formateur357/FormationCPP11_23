#ifndef ARRAYTEMPLATE_H
#define ARRAYTEMPLATE_H

#include <iostream>

template <typename T, size_t SIZE>
class Array
{
private:
    T elements[SIZE];

public:
    T get(size_t index) const
    {
        return elements[index];
    }

    void set(size_t index, T value)
    {
        elements[index] = value;
    }

    void display() const
    {
        for (size_t i = 0; i < SIZE; i++)
        {
            std::cout << elements[i] << " ";
        }
        std::cout << std::endl;
    }
};

#endif