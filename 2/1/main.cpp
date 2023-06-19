#include "eq2.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c;
    cin >> a >> b >> c;
    eq2 exmpl(a, b, c);
    cin >> a >> b >> c;
    eq2 exmpl2(a, b, c);
    eq2 exmpl3 = exmpl + exmpl2;
    exmpl.find_X();
    cout << exmpl.find_Y(6);
    return 0;
}