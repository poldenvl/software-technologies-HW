#include "getElement.h"
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int arr[] = { 1, 2, 3, 4, 5 };

    try {
        int index = 10;
        int element = getElement(arr, index);
        std::cout << "Элемент с индексом " << index << ": " << element << std::endl;
    }
    catch (const std::out_of_range& e) {
        std::cout << "Исключение: " << e.what() << std::endl;
    }
}

