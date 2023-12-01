#ifndef MATHEXCEPTION_H
#define MATHEXCEPTION_H

#include <exception>
#include <string>

using namespace std;

class MathException : public exception
{
private:
    string message;

public:
    explicit MathException(const string msg) : message(msg){};

    const char *what() const noexcept override
    {
        return message.c_str();
    }
};

#endif