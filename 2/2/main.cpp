#include "rational.h"
#include <iostream>
using namespace std;
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
	delete[] arr;
}

