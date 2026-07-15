#include <iostream>
#include <vector>
#include <algorithm>

int labirinto_bt(std::vector<std::vector<int>>& matriz,
    int linha, int coluna,
    int l, int c,
    int lf, int cf) {

    if (l == -1 || c == -1 || l == linha || c == coluna){return 99999;}
    if (matriz[l][c] == -1){return 999999;}
    if (l == lf && c == cf){return matriz[l][c];}
    int ans = matriz[l][c];
    matriz[l][c] = -1;

    int op1 = labirinto_bt(matriz, linha, coluna, l-1, c, lf, cf);
    int op2 = labirinto_bt(matriz, linha, coluna, l, c+1, lf, cf);
    int op3 = labirinto_bt(matriz, linha, coluna, l+1, c, lf, cf);
    int op4 = labirinto_bt(matriz, linha, coluna, l, c-1, lf, cf);

    matriz[l][c] = ans;

    return ans + std::min({op1, op2, op3, op4});
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

    if (labirinto_bt(matriz, linha, coluna, l, c, lf, cf) == 99999) {
        std::cout << ">>> Não há caminho disponível para o ponto de chegada." << '\n';
    } else {
        std::cout << ">>> Soma do caminho com menor dificuldade: " <<
        labirinto_bt(matriz, linha, coluna, l, c, lf, cf) << '\n';
    }
    
    return 0;
}