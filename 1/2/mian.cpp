#include "circle.h"
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    Circle mas[3] = {
        Circle(0,0,0),
        Circle(0,0,0),
        Circle(0,0,0)
    };
    double r, x, y;
    for (int i = 0; i < 3; i++)
    {
        cout << "Введите значения r x y для окружности № " << i + 1 << " через пробел:\n";
        cin >> r >> x >> y;
        mas[i].set_circle(r, x, y);
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Площать окружности: " << mas[i].square() << '\n';
        cout << "Можно ли описать треугольник со сторонамии 2 3 4 окружностью № " << i + 1 <<"? ";
        mas[i].triangle_in(2, 3, 4) ? cout<<"Да\n" : cout<<"Нет\n";
        cout << "Можно ли вписать окружность № " << i + 1 << " в треугольник со сторонамии 2 3 4? ";
        mas[i].triangle_around(2, 3, 4) ? cout << "Да\n" : cout << "Нет\n";
        cout << "Пересакает ли окружность с радиусом 3 x=0 y=0 окружность № " << i + 1 << "? ";
        mas[i].check_circle(3,0,0) ? cout << "Да\n" : cout << "Нет\n";
    }
}
