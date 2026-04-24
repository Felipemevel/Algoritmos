#include <iostream>

int main() {

    int size, seq = 1, ans = 1;
    std::cin >> size;
    int list[size];

    for (int i = 0; i < size; i++) {
        int newValue;
        std::cin >> newValue;
        list[i] = newValue;
    }

    for (int i = 1; i < size; i++) {
        if (list[i-1] <= list[i]) {
            seq++;
        } else {
            if (seq > ans) {
                ans = seq;
            }
            seq = 1;
        }
    }

    if (seq > ans) {
        ans = seq;
    }

    std::cout << ans << std::endl;

    return 0;
}