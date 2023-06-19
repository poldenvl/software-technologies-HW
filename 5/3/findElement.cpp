#include <iostream>
#include <set>
#include "findElement.h"
using namespace std;
bool findElement(const set<int>& mySet, int target) {
    if (mySet.empty()) {
        throw runtime_error("This set is empty\n");
    }

    auto it = mySet.find(target);
    if (it != mySet.end()) {
        return true;
    }
    else {
        return false;
    }
}