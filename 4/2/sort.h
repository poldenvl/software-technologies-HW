#include <string>
using namespace std;

template <class T> void Swap(T& x, T& y) {
    T z = x;
    x = y;
    y = z;
}
template <class T>
void SortArray(T* arr,int size) {
    for (size_t i = 0; i < size - 1; ++i) {
        for (size_t j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                Swap(arr[j], arr[j + 1]);
            }
        }
    }
}

template <>
void SortArray<string>(string* arr,int size) {
    for (size_t i = 0; i < size - 1; ++i) {
        for (size_t j = 0; j < size - i - 1; ++j) {
            if (arr[j].compare(arr[j + 1]) > 0) {
                Swap(arr[j], arr[j + 1]);
            }
        }
    }
}
