#ifndef SWAPFUNCTION_H
#define SWAPFUNCTION_H

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

#endif