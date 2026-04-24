#include <iostream>

int main() {

    int size, newDiff;
    int diff = 0;
    std::cin >> size;
    int list[size];

    for (int i = 0; i < size; i++) {
        int newValue;
        std::cin >> newValue;
        list[i] = newValue;
    }

    for (int i = 1; i < size; i++) {
        newDiff = std::abs((list[i-1]+list[i]));
        if (newDiff > diff) {
            diff = newDiff;
        }
    }

    std::cout << diff << std::endl;

    return 0;
}