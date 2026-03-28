#include <iostream>
#include <iomanip>
#include <string>

struct aluno {
    std::string nome;
    long long matricula;
    double nota1 = 0.0;
    double nota2 = 0.0;
    double nota3 = 0.0;
    double media = 0.0;
    bool situacao = false;
};

double calcularMedia(double a1, double a2, double a3) {
    double media = (a1 + a2 +a3) / 3.0;
    return media;
}

int main() {

    int opcao = 0;
    aluno listaAlunos[4];

    listaAlunos[0].matricula = 20260001;
    listaAlunos[0].nome = "Felipe André Silva do Nascimento";
    listaAlunos[0].situacao = false;

    listaAlunos[1].matricula = 20260002;
    listaAlunos[1].nome = "Guilherme Cavalcanti";
    listaAlunos[1].situacao = false;

    listaAlunos[2].matricula = 20260003;
    listaAlunos[2].nome = "Gustavo Jácome Ferreira";
    listaAlunos[2].situacao = false;

    listaAlunos[3].matricula = 20260004;
    listaAlunos[3].nome = "Maxwell Dantas";
    listaAlunos[3].situacao = false;

    do {
        std::cout << "========== MENU ==========" << std::endl;
        std::cout << "= 1 - Listar alunos" << std::endl;
        std::cout << "= 2 - Atribuir notas" << std::endl;
        std::cout << "= 3 - Sair" << std::endl;
        std::cout << "==========================" << std::endl;

        std::cout << "> Digite a opção desejada: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                std::cout << "========== ALUNOS ==========" << std::endl;
                for (int i = 0; i<4; i++) {
                    std::cout << "= " << i+1 << " - ";
                    std::cout << "Nome: " << listaAlunos[i].nome << " | ";
                    std::cout << "Matricula: " << listaAlunos[i].matricula << " | ";
                    std::cout << "AV1: " << listaAlunos[i].nota1 << " | ";
                    std::cout << "AV2: " << listaAlunos[i].nota2 << " | ";
                    std::cout << "AV3: " << listaAlunos[i].nota3 << " | ";
                    std::cout << "Média: " << std::fixed << std::setprecision(1) << listaAlunos[i].media << " | ";
                    std::cout << "Aprovado: " << std::boolalpha << listaAlunos[i].situacao << std::endl;
                }
                std::cout << "===========================" << std::endl;
                break;
            case 2:
                std::cout << "========== NOTAS ==========" << std::endl;
                for (int i = 0; i<4; i++) {
                    std::cout << "= > " << listaAlunos[i].nome << " | " << listaAlunos[i].matricula << std::endl;
                    std::cout << "= AV1: ";
                    std::cin >> listaAlunos[i].nota1;
                    std::cout << "= AV2: ";
                    std::cin >> listaAlunos[i].nota2;
                    std::cout << "= AV3: ";
                    std::cin >> listaAlunos[i].nota3;
                    listaAlunos[i].media = calcularMedia(listaAlunos[i].nota1, listaAlunos[i].nota2, listaAlunos[i].nota3);

                    if (listaAlunos[i].media >= 6) {
                        listaAlunos[i].situacao = true;
                    } else {
                        listaAlunos[i].situacao = false;
                    }
                }
                std::cout << "===========================" << std::endl;
                break;
            case 3:
                std::cout << "Finalizando programa..." << std::endl;
                break;
            default:
                std::cout << ">>>Opção inválida<<<" << std::endl;
                break;
        }

    } while (opcao != 3);
}