#include <iostream>
#include <vector>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;

    std::vector<int> frequencia(100001, 0);

    int valor;
    for (int i = 0; i < n; i++) {
        std::cin >> valor;
        if (valor >= 0 && valor <= 100000) {
            frequencia[valor]++;
        }
    }

    int distintos = 0;
    for (int i = 0; i < 100001; i++) {

        if (frequencia[i] > 0) {
            distintos++;
        }
    }

    std::cout << distintos << std::endl;

    return 0;
}