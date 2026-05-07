#include <iostream>

int divisores (int n) {
    int div;

    for (int i = 1; i <= n; i++) {
        if (n%i == 0) {
            div += 1;
        }
    }
    return div;
}

int main() {
    int n;
    std::cin >> n;

    std::cout << divisores(n) << std::endl;
    return 0;
}
