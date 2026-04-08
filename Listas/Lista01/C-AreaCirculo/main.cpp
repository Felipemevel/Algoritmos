#include <iomanip>
#include <iostream>


float areaCirculo(float perimetro, float pi) {
    float res = pi*(perimetro*perimetro);
    return res;
}


int main() {

    float perimetro , pi;
    pi = 3.14159;

    std::cin >> perimetro;

    std::cout << std::fixed <<std::setprecision(5) << areaCirculo(perimetro, pi) <<std::endl;
    return 0;
}
