#include "myClass.h"
using namespace std;
MyClass::MyClass(int a, float b) {
    this->a = a;
    this->b = b;
}

void MyClass::Out() {
    cout << a << " " << b << "\n";
}

MyClass MyClass::operator=(const MyClass& T) {
    a = T.a;
    b = T.b;
    return *this;
}
