#include "division.h"
#include <stdexcept>
#include <iostream>
using namespace std;
int main()
{
	float numerator, denominator, result;
	numerator = 12.5;
	denominator = 2;
	try
	{
		result = Division(numerator, denominator);
		cout << "The quotient is " << result << "\n";
	}
	catch (runtime_error& e)
	{
		cout << "Exception occurred\n" << e.what();
	}
}

