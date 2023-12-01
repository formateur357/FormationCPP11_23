#include "MathException.h"
using namespace std;

MathException::MathException(const string& message) : errorMessage(message)
{
}
const char* MathException::what() const
{
	return errorMessage.c_str();
}
