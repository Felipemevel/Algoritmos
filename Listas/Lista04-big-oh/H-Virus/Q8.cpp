#include <iostream>

int main() {

    int infected = 1, days = 0, population;
    std::cin >> population;

    while (infected <= population) {
        infected *= 2;
        days += 1;
    }

    std::cout << days << " dia(s)" << std::endl;

}