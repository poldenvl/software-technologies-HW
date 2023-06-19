
#include <iostream>
#include <set>
#include "findElement.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    std::set<int> mySet;

    try {
        int target = 42;
        bool found = findElement(mySet, target);
        std::cout << "Элемент " << target << (found ? " найден." : " не найден.\n");
    }
    catch (const runtime_error& e) {
        std::cout << "Исключение: " << e.what() << "\n";
    }

   
}

