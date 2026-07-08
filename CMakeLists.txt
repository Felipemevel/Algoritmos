cmake_minimum_required(VERSION 3.20)
project(Listas)

set(CMAKE_CXX_STANDARD 14)

# --- LISTA 01 ---
add_executable(L1_Q1 Listas/Lista01/A-SomaSimples/Q1.cpp)
add_executable(L1_Q2 Listas/Lista01/B-PerimetroRetangulo/Q2.cpp)
add_executable(L1_Q3 Listas/Lista01/C-AreaCirculo/Q3.cpp)
add_executable(L1_Q4 Listas/Lista01/D-DistanciaPostes/Q4.cpp)

# --- LISTA 04 ---
add_executable(L4_Q3 Listas/Lista04-big-oh/C-MaiorDiferenca/Q3.cpp)
add_executable(L4_Q4 Listas/Lista04-big-oh/D-MaiorContigua/Q4.cpp)
add_executable(L4_Q8 Listas/Lista04-big-oh/H-Virus/Q8.cpp)
add_executable(L4_Q9 Listas/Lista04-big-oh/I-MeiaVida/Q9.cpp)
add_executable(L4_Q10 Listas/Lista04-big-oh/J-RepeticaoArray/Q10.cpp)

# --- LISTA 08 ---
add_executable(L8_Q1 Listas/Lista08-VetorDinamico/A-LerNumeros/Q1.cpp)
add_executable(L8_Q2 Listas/Lista08-VetorDinamico/B-RetonarValorDeIndice/Q2.cpp)
add_executable(L8_Q3 Listas/Lista08-VetorDinamico/C-RemoverValorDoVetor/Q3.cpp)
add_executable(L8_Q4 Listas/Lista08-VetorDinamico/D-TamanhoLogico/Q4.cpp)
add_executable(L8_Q5 Listas/Lista08-VetorDinamico/E-CompararNumeros/Q5.cpp)
add_executable(L8_Q6 Listas/Lista08-VetorDinamico/F-AdicionarVetor/Q6.cpp)

# --- LISTA 09 ---

add_executable(L9_Q1 Listas/Lista09-ListaLigada/A-VetorLigado/Q1.cpp)
add_executable(L9_Q2 Listas/Lista09-ListaLigada/B-InsertAfter/Q2.cpp)
add_executable(L9_Q3 Listas/Lista09-ListaLigada/C-RemoçãoIndiceValor/Q3.cpp)
add_executable(L9_Q4 Listas/Lista09-ListaLigada/D-MoverMenorPrimeiro/Q4.cpp)
add_executable(L9_Q5 Listas/Lista09-ListaLigada/E-CompararValoresEntreListas/Q5.cpp)

# --- LISTA 10 ---

add_executable(L10_Q1 Listas/Lista10-Backtracking01-Labirinto/A-CaminhoValido/Q1.cpp)
add_executable(L10_Q2 Listas/Lista10-Backtracking01-Labirinto/B-QtdCaminhosValidos/Q2.cpp)