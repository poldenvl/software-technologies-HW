#include "figure.h"
#include <iostream>
#include <math.h>
using namespace std;

Figure::Figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4)
{
	this->x1 = x1;
	this->x2 = x2;
	this->x3 = x3;
	this->x4 = x4;
	this->y1 = y1;
	this->y2 = y2;
	this->y3 = y3;
	this->y4 = y4;
	this->S = abs((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1));
	this->P = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) + sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2)) + sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2)) + sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
}

void Figure::show()
{
	cout << "Координаты 1 веришины(x,y): " << x1 << " " << y1 << "\n";
	cout << "Координаты 2 веришины(x,y): " << x2 << " " << y2 << "\n";
	cout << "Координаты 3 веришины(x,y): " << x3 << " " << y3 << "\n";
	cout << "Координаты 4 веришины(x,y): " << x4 << " " << y4 << "\n";
	cout << "Площадь:" << S << "\n";
	cout << "Периметр:" << P << "\n";

}

bool Figure::is_prug()
{
	double diagonal1 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	double diagonal2 = sqrt(pow(x4 - x2, 2) + pow(y4 - y2, 2));

	if (diagonal1 == diagonal2) {
		return true;
	}
	else {
		return false;
	}
}

bool Figure::is_square()
{
	double side1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	double side2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	double side3 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
	double side4 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
	double diagonal1 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	double diagonal2 = sqrt(pow(x4 - x2, 2) + pow(y4 - y2, 2));

	if (side1 == side3 && side2 == side4 && diagonal1 == diagonal2) {
		return true;
	}
	else {
		return false;
	}
}

bool Figure::is_romb()
{
	double side1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	double side2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	double side3 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
	double side4 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));

	if (side1 == side3 && side2 == side4) {
		return true;
	}
	else {
		return false;
	}
}

bool Figure::is_in_circle()
{
	double side1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	double side2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	double side3 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
	double side4 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
	double diagonal1 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	double diagonal2 = sqrt(pow(x4 - x2, 2) + pow(y4 - y2, 2));
	if (diagonal1 * diagonal2 == (side1*side3)+(side2*side4))
	{
		return true;
	}
	return false;
}

bool Figure::is_out_circle()
{
	if (is_square() || is_romb() || is_prug())
	{
		return true;
	}
	return false;
}
