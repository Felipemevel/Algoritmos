#include <iostream>
#include <vector>

int bt_labirinto(std::vector<std::vector<int>>& matriz,
    int linha, int coluna,
    int l, int c) {
    int ans = 0;

    if (c == -1 || l == -1 || c == coluna || l == linha){return 0;}
    if (matriz[l][c] == 1 || matriz[l][c] == -1){return 0;}
    if (l == linha-1 && c == coluna-1){return 1;}

    matriz[l][c] = -1;

    ans +=
        bt_labirinto(matriz, linha, coluna, l, c-1) +
            bt_labirinto(matriz, linha, coluna, l-1, c) +
                bt_labirinto(matriz, linha, coluna, l+1, c) +
                    bt_labirinto(matriz, linha, coluna, l, c+1);

    matriz[l][c] = 0;
    return ans;
}


int main() {
    int linha, coluna; std::cin >> linha >> coluna;
    std::vector<std::vector<int>> matriz(linha, std::vector<int>(coluna, 0));

    for (int i = 0; i<linha; i++) {
        for (int j = 0; j<coluna; j++) {
            int temp; std::cin >> temp;
            matriz[i][j] = temp;
        }
    }

    std::cout << bt_labirinto(matriz, linha, coluna, 0, 0) << '\n';

    return 0;
}