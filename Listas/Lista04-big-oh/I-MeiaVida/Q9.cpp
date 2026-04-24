#include <iostream>

int main () {
    int t, mi, s = 0;
    std::cin >> t >> mi;

    while (mi >= 1) {
        mi /= 2;
        s += t;
    }

    std::cout << s << " segundo(s)" << std::endl;
    return 0;
}