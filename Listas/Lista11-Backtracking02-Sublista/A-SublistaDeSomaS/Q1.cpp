#include <iostream>
#include <vector>

bool sublista_bt(const std::vector<int>& lista,
    int n, int s, int idx) {

    if (s == 0){return true;}
    if (s < 0 || idx == n){return false;}

    if (sublista_bt(lista, n, (s-lista[idx]), (idx+1))) {return true;}
    return sublista_bt(lista, n, s, (idx+1));

}

int main() {

    int n, s;
    std::cin >> n >> s;

    std::vector<int> lista(n);
    for (int i = 0; i < n; i++) {
        std::cin >> lista[i];
    }

    if (sublista_bt(lista, n, s, 0)) {
        std::cout << ">>> Existe uma sublista cuja soma seja S!" << '\n';
    } else {
        std::cout << ">>> Não existe uma sublista cuja soma seja S." << '\n';
    }
    return 0;
}