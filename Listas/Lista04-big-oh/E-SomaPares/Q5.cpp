#include <iostream>
#include <algorithm>

int main () {

    int size, num;
    std::cin >> size;
    int list[size];

    for (int i = 0; i < size; i++) {
        std::cin >> list[i];
    }

    std::cin >> num;
    std::sort(list, list + size);

    int lIdx = 0;
    int rIdx = size-1;
    bool found = false;

    while (lIdx < rIdx) {
        int sum = list[lIdx] + list[rIdx];
        if (sum == num) {
            found = true;
            break;
        } else if (sum > num) {
            rIdx--;
        } else {
            lIdx++;
        }

    }

    if (found) {
        std::cout << "S" << std::endl;
    } else {
        std::cout << "N" << std::endl;
    }

    return 0;
}