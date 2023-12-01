#include <iostream>
#include <vector>
using namespace std;

template <class T> void swap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <class T, int Size>
class Array
{
private:
    T data[Size];

public:
    T get(int index) const 
    {
        if (index >= 0 && index < Size) {
            return data[index];
        }
        else {
            cout << "Index error" << endl;
        }
    }

    void set(int index, const T& value) 
    {
        if (index >= 0 && index < Size) {
            data[index] = value;
        }
        else {
            cout << "Index error" << endl;
        }
    }

    void display() const 
    {
        cout << "Array : [";
        for (int i = 0; i < Size; ++i) {
            cout << data[i];
        }
        cout << "]" << endl;
    }
};

int main()
{
    Array<int, 5> intArray;
    for (int i = 0; i < 5; ++i) {
        intArray.set(i, i);
    }
    intArray.display();

    Array<double, 1> doubleArray;
    doubleArray.set(0, 5);
    doubleArray.display();

    Array<char, 4> charArray;

    for (int i = 0; i < 4; ++i) {
        charArray.set(i, 'Z');
    }
    charArray.display();

    return 0;
}