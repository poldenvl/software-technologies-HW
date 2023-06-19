#include "sort.h"
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int* intArray = new int[5] {5, 2, 8, 1, 3};
    int intsize = 5;
    SortArray(intArray,intsize);

    cout << "Сортированый int массив: ";
    for (int i = 0; i < intsize; ++i) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    double* doubleArray = new double[5] {5.1, 2.2, 8.3, 1.4, 3.5};
    int doublesize = 5;
    SortArray(doubleArray, doublesize);

    cout << "Сортированый double массив: ";
    for (int i = 0; i < doublesize; ++i) {
        cout << doubleArray[i] << " ";
    }
    cout << endl;

    string* stringArray = new string[5]{ "Родион", "Олег", "Богдан", "Илья", "Андрей" };
    int stringsize = 5;
    SortArray(stringArray, stringsize);

    cout << "Сортированый массив строк: ";
    for (int i = 0; i < stringsize; ++i) {
        cout << stringArray[i] << " ";
    }
    cout << endl;

    delete[] intArray;
    delete[] stringArray;

    return 0;
}

