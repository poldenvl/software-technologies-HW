#pragma once
#include <iostream>
using namespace std;

template <class T> void Swap(T& x, T& y) {
    T z = x;
    x = y;
    y = z;
}

template <class T> void OutXY(T& x, T& y) {
    cout << x << " " << y << "\n";
}

class MyClass {
    int a;
    float b;

public:
    MyClass(int a, float b);

    void Out();

    MyClass operator=(const MyClass& T);
};