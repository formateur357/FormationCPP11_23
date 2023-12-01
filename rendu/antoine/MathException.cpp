#include "MathException.h"

MathException::MathException(const std::string& message) 
{
}
const char* MathException::what()
{
	return errorMessage.c_str();
}
