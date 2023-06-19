#include "figure.h"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	double x1, x2, x3, x4, y1, y2, y3, y4;
	Figure *mas[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Введите значения x1 x2 x3 x4 y1 y2 y3 y4 для прямоугольника № " << i + 1 << " через пробел:\n";
		cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
		mas[i] = new Figure(x1,x2,x3,x4,y1,y2,y3,y4);
	}
	for (int i = 0; i < 3; i++)
	{
		mas[i]->show();
		cout << "Является прямоугольником? ";
		mas[i]->is_prug() ? cout << "Да\n" : cout << "Нет\n";
		cout << "Является квадратом? ";
		mas[i]->is_square() ? cout << "Да\n" : cout << "Нет\n";
		cout << "Является ромбом? ";
		mas[i]->is_romb() ? cout << "Да\n" : cout << "Нет\n";
		cout << "Можно вписать в окружность? ";
		mas[i]->is_in_circle() ? cout << "Да\n" : cout << "Нет\n";
		cout << "Можно в него вписать окружность? ";
		mas[i]->is_out_circle() ? cout << "Да\n" : cout << "Нет\n";
	}
	delete[] *mas;
}

