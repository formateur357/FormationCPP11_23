#pragma once
#include <iostream>
using namespace std;

class MathException : public exception
{
private:
    string errorMessage;

public:
    MathException(const std::string& message);
    const char* what() const override;
};