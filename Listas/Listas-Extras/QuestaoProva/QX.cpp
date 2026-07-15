#include <iostream>
#include <vector>
#include <algorithm>

int eduzinho_bt(std::vector<std::vector<int>> &matriz,
    int linha, int coluna,
    int l, int c) {

    if (l == -1 || c == -1){return 99999;}
    if (l >= linha || c >= coluna){return 99999;}
    if (c == coluna-1){return matriz[l][c];}

    int ans = matriz[l][c];

    if (l == 0) {
        int op1 = eduzinho_bt(matriz, linha, coluna, l, c+1);
        int op2 = eduzinho_bt(matriz, linha, coluna, l+1, c+1);

        return ans + std::min(op1, op2);
    }
    if (l == linha-1) {
        int op1 = eduzinho_bt(matriz, linha, coluna, l, c+1);
        int op2 = eduzinho_bt(matriz, linha, coluna, l-1, c+1);

        return ans + std::min(op1, op2);
    }
    int op1 = eduzinho_bt(matriz, linha, coluna, l, c+1);
    int op2 = eduzinho_bt(matriz, linha, coluna, l+1, c+1);
    int op3 = eduzinho_bt(matriz, linha, coluna, l-1, c+1);

    return ans + std::min({op1, op2, op3});

}

int main() {
    int linha, coluna; std::cin >> coluna >> linha;
    std::vector<std::vector<int>> matriz(linha, std::vector<int>(coluna, 0));
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            int temp; std::cin >> temp;
            matriz[i][j] = temp;
        }
    }
    int l = 0; int c = 0;

    std::cout << eduzinho_bt(matriz, linha, coluna, l, c) << '\n';

    return 0;
}