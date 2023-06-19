#include "getElement.h"
#include <stdexcept>
using namespace std;

int getElement(const int* arr, int index)
{
    if (index < 0 || index >= sizeof(arr)) {
        throw out_of_range("Invalid index");
    }
    return arr[index];
}
