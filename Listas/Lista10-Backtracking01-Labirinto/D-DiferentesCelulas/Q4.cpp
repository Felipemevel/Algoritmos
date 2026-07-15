#include <iostream>
#include <vector>

bool labirinto_bt(std::vector<std::vector<int>>& matriz,
    int linha, int coluna,
    int l, int c,
    int lf, int cf) {

    if (l <= -1 || c <= -1){return false;}
    if (l == linha || c == coluna){return false;}
    if (matriz[l][c] == -1 || matriz[l][c] == 1){return false;}
    if (l == lf && c == cf){return true;}

    matriz[l][c] = -1;

    bool ans =
        labirinto_bt(matriz, linha, coluna, l-1, c, lf, cf) ||
            labirinto_bt(matriz, linha, coluna, l, c+1, lf, cf) ||
                labirinto_bt(matriz, linha, coluna, l+1, c, lf, cf) ||
                    labirinto_bt(matriz, linha, coluna, l, c-1, lf, cf);

    matriz[l][c] = 0;
    return ans;
}


int main() {

    int linha, coluna, l, c, lf, cf;
    std::cin >> linha >> coluna;
    std::cin >> l >> c;
    std::cin >> lf >> cf;
    std::vector<std::vector<int>> matriz(linha, std::vector<int>(coluna, 0));

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            int temp;
            std::cin >> temp;
            matriz[i][j] = temp;
        }
    }
    if (labirinto_bt(matriz, linha, coluna, l, c, lf, cf)) {
        std::cout << ">>> Possui saída válida!" << '\n';
    } else {
        std::cout << ">>> Não possui saída válida." << '\n';
    }
    return 0;
}