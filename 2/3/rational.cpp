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
	if (a1 == 0)
	{
		a = a1;
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
	if (a1 > b1) {
		a1 = a1 % b1;
	}
	if (a1 == 0 || a1 == b1 || b1%a1 !=0)
	{
		a = a1;
		b = b1;
		return;
	}
	if (b1 % a1 == 0)
	{
		a = 1;
		b = b1 / a1;
		return;
	}

	//if (a1 == b1)
	//{
	//	a = a1;
	//	b = b1;
	//	return;
	//}
	//if (a1 / b1 != 0)
	//{
	//	a = a1 % b1;
	//	b = b1;
	//	return;
	//}
	//if (b1 % a1 != 0)
	//{
	//	a = a1;
	//	b = b1;
	//	return;
	//}
	//a = 1;
	//b = b1 / a1;
}

void rational::inc()
{
	a++;
}

void rational::show()
{
	cout << a << "/" << b << "\n";
}

rational rational::operator+(rational& r)
{
	return rational(a * r.b + r.a * b, b * r.b);
}


rational rational::operator++(const int)
{
	inc();
	return *this;
}

bool rational::operator ==(rational& r)
{
	if (a == r.a && b == r.b)
	{
		return true;
	}
	return false;
}

bool rational::operator>(rational& r)
{
	if (a*r.b > r.a * b)
	{
		return true;
	}
	return false;
}

rational rational::operator=(rational& r)
{
	a = r.a;
	b = r.b;
	return *this;
}


