#include <iostream>
#include <vector>

std::vector<int> sublista_bt(std::vector<int> lista,
    int n, int s, int idx) {

    if (s == 0){return std::vector<int>();}
    if (s < 0 || idx == n){return {-1};}

    std::vector<int> incluir = sublista_bt(lista, n, (s-lista[idx]), (idx+1));
    if (incluir.empty() ||  incluir[0] != -1) {
        incluir.push_back(lista[idx]);
        return incluir;
    }
    std::vector<int> naoIncluir = sublista_bt(lista, n, s, (idx+1));
    return naoIncluir;

}

int main() {
    int n, s;
    std::cin >> n >> s;

    std::vector<int> lista(n);
    for (int i = 0; i < n; i++) {
        std::cin >> lista[i];
    }

    // 1. Armazena o vetor retornado pela função
    std::vector<int> resultado = sublista_bt(lista, n, s, 0);

    // 2. Verifica se o caminho falhou (marcador -1)
    if (!resultado.empty() && resultado[0] == -1) {
        std::cout << ">> Não possui saída válida.\n";
    } else {
        std::cout << ">> Números da sublista cuja soma é S: ";

        // 3. Itera sobre o vetor imprimindo cada número
        for (int i = 0; i < resultado.size(); i++) {
            std::cout << resultado[i] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}