#include <iostream>

bool coprimos(int n1, int n2) {
    int menor = (n1 < n2) ? n1 : n2;

    for (int i = 2; i <= menor; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            return false;
        }
    }
    return true;
}

int main () {
    int n1, n2;
    if (!(std::cin >> n1 >> n2)) return 0;
    std::cout << std::boolalpha << coprimos(n1, n2) << std::endl;

    return 0;
}
