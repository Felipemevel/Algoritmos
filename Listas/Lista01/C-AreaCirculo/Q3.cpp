#include <iomanip>
#include <iostream>


float areaCirculo(float raio, float pi) {
    float res = pi*(raio*raio);
    return res;
}

 
int main() {

    float perimetro , pi, raio;
    pi = 3.14159;

    std::cin >> perimetro;

    raio = perimetro/2;

    std::cout << std::fixed <<std::setprecision(5) << areaCirculo(raio, pi) <<std::endl;
    return 0;
}
