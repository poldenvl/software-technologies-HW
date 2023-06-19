#include "division.h"
#include <stdexcept>
using namespace std;
float Division(float num, float den)
{
	if (den == 0)
	{
		throw runtime_error("Math error: Attempted to divide by Zero\n");
	}
	return (num / den);
}
