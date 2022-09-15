#include <iostream>
#include "Calculator.h"

using namespace std;

double Calculator::Calculate(double x, char oper, double y)
{
	switch (oper)
	{
		case '+':
			return x + y;
		case '-':
			return x - y;
		case '*':
			return x * y;
		case '/':
			return x / y;
		default:
			return 0.0;
	}
}
