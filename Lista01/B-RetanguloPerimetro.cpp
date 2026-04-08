#include <iostream>

float perimetro(float ladoA, float ladoB) {
    return 2*(ladoA + ladoB);
}

int main() {

    float ladoA, ladoB;

    std::cin >> ladoA >> ladoB;

    std::cout << perimetro(ladoA, ladoB) << std::endl;

    return 0;
}
