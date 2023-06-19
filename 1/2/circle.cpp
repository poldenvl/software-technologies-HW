#include "circle.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

Circle::Circle(float r, float x, float y) {
	radius = r;
	x_center = x;
	y_center = y;
}
void Circle::set_circle(float r, float x, float y) {
	radius = r;
	x_center = x;
	y_center = y;
}
float Circle::square() {
	return M_PI * pow(radius,2);
}
bool Circle::triangle_around(float a, float b, float c) {
	double s = (a + b + c) / 2.0;
	double triangleArea = sqrt(s * (s - a) * (s - b) * (s - c));
	double circumradius = (a * b * c) / (4.0 * triangleArea);
	if (circumradius == radius) {
		return true;
	}
	return false;
}
bool Circle::triangle_in(float a, float b, float c) {
	double s = (a + b + c) / 2.0;
	double triangleArea = sqrt(s * (s - a) * (s - b) * (s - c));
	double inradius = 2.0 * triangleArea / (a + b + c);
	if (inradius == radius) {
		return true;
	}
	return false;
}
bool Circle::check_circle(float r, float x_cntr, float y_cntr) {
	double distance = sqrt(pow(x_cntr - x_center, 2) + pow(y_cntr - y_center, 2));
	if (distance <= radius + r) {
		return true;
	}
	return false;
}
