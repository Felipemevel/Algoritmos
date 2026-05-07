#include <iostream>

bool numPrimo (int n) {
    int div = 0;
    if (n < 2) {
        return false;
    }
    for (int i = 1; i <= n; i++) {
        if (n%i == 0) {
            div++;
        }
    }
    if (div > 2) {
        return false;
    } else {
        return true;
    }
}

int main() {
    int n;
    std::cin >> n;
    std::cout << std::boolalpha << numPrimo(n) << std::endl;
    return 0;
}
