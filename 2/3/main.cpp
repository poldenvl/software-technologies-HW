#include "rational.h"
#include <iostream>
using namespace std;
rational operator-(rational &r1,rational &r2)
{
	return rational(r1.a * r2.b - r2.a * r1.b, r1.b * r2.b);
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int n,a,b;
	cout << "Размер массива:";
	cin >> n;
	rational* arr = new rational[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Введите числитель и знаменатель через пробел:\n";
		cin >> a >> b;
		arr[i].set(a, b);
	}
	for (int i = 0; i < n; i++)
	{
		arr[i].show();
	}
	cout << "Сложение 1 и 2 дробей: ";
	rational sum = arr[0] + arr[1];
	sum.show();
	cout << "Вычитание 1 и 2 дробей: ";
	rational minus = arr[0] - arr[1];
	minus.show();
	cout << "Инкремент 1 дроби: ";
	rational inc = arr[0]++;
	inc.show();
	cout << "Сравнение дробей:";
	arr[0] == arr[1] ? cout << "Равны\n" : cout << "Не равны\n";
	cout << "1 дробь больше второй? ";
	arr[0] > arr[1] ? cout << "Больше\n" : cout << "Меньше\n";
	cout << "Присваивание 1 элемент = второму\n до присваивания 1:";
	arr[0].show();
	cout << "2:";
	arr[1].show();
	cout << "После:";
	arr[0] = arr[1];
	arr[0].show();
	delete[] arr;
}

