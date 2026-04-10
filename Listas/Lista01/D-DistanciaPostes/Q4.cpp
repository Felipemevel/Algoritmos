#include <iostream>

struct resultado {
    int postes;
    int dPostef;
};

resultado calculo(int distancia, int dPoste) {
    int postes = 2;
    int dPostef = 0;

    if (distancia%dPoste != 0) {
        dPostef = distancia%dPoste;
        postes += distancia/dPoste;
    } else {
        postes += distancia/dPoste - 1;
        dPostef = dPoste;
    }

    return {postes, dPostef};
}

int main() {

    int distancia, dPoste;

    std::cin >> distancia >> dPoste;
    resultado res = calculo(distancia, dPoste);

    std::cout << "Postes: " <<
        res.postes <<
            std::endl;
    std::cout << "Distância do último poste: " <<
        res.dPostef <<
            "m"<<
                std::endl;
     return 0;
}