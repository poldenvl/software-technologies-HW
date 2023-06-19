﻿#include <iostream>
#include "myClass.h"
using namespace std;



int main() {
    setlocale(LC_ALL, "Russian");
    int x = 1;
    int y = 2;
    cout << "Перед обменом (целые)\n";
    OutXY(x, y);
    Swap(x, y);
    cout << "После обмена\n";
    OutXY(x, y);
    float x1 = 1.5;
    float y1 = 5.9;
    cout << "Перед обменом (float)\n";
    OutXY(x1, y1);
    Swap(x1, y1);
    cout << "После обмена\n";
    OutXY(x1, y1);
    MyClass t1(1, 1.5), t2(2, 9.9);
    cout << "Перед обменом (классы)\n";
    t1.Out();
    t2.Out();
    Swap(t1, t2);
    cout << "После обмена\n";
    t1.Out();
    t2.Out();
    return 0;
}