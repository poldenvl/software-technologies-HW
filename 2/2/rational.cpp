#include "rational.h"
#include <iostream>
using namespace std;

rational::rational(int a1, int b1)
{
	if (b == 0)
	{
		cout << "Знаменатель не должен быть равен 0";
	}
	if (a1 == b1)
	{
		a = a1;
		b = b1;
		return;
	}
	if (a1 / b1 != 0)
	{
		a = a1 % b1;
		b = b1;
		return;
	}
	if (b1 % a1 != 0)
	{
		a = a1;
		b = b1;
		return;
	}
	a = 1;
	b = b1 / a1;
}

rational::rational()
{
}

void rational::set(int a1, int b1)
{
	if (b == 0)
	{
		cout << "Знаменатель не должен быть равен 0";
	}
	if (a1 == b1)
	{
		a = a1;
		b = b1;
		return;
	}
	if (a1 / b1 !=0)
	{
		a = a1 % b1;
		b = b1;
		return;
	}
	if (b1 % a1 != 0)
	{
		a = a1;
		b = b1;
		return;
	}
	a = 1;
	b = b1 / a1;
}

void rational::show()
{
	cout << a << "/" << b << "\n";
}
