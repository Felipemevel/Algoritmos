#include <iostream>
#include <vector>

int sublista_bt(std::vector<int>& lista,
    int n, int s, int idx) {

    if (s == 0){return 1;}
    if (s < 0 || idx == n){return 0;}

    int ans =
        sublista_bt(lista, n, (s-lista[idx]),(idx+1)) +
            sublista_bt(lista, n, s, (idx+1));

    return ans;
}

int main() {

    int n, s;
    std::cin >> n >> s;

    std::vector<int> lista(n);
    for (int i = 0; i < n; i++) {
        std::cin >> lista[i];
    }

    std::cout << ">> Quantidade de Sublistas cuja soma é S: " << sublista_bt(lista, n, s, 0) << '\n';
    return 0;
}