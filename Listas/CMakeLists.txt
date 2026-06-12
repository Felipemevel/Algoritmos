cmake_minimum_required(VERSION 3.20)
project(Listas)

set(CMAKE_CXX_STANDARD 14)

# --- LISTA 01 ---
add_executable(L1_Q1 Lista01/A-SomaSimples/Q1.cpp)
add_executable(L1_Q2 Lista01/B-PerimetroRetangulo/Q2.cpp)
add_executable(L1_Q3 Lista01/C-AreaCirculo/Q3.cpp)
add_executable(L1_Q4 Lista01/D-DistanciaPostes/Q4.cpp)

# --- LISTA 04 ---
add_executable(L4_Q3 Lista04-big-oh/C-MaiorDiferenca/Q3.cpp)
add_executable(L4_Q4 Lista04-big-oh/D-MaiorContigua/Q4.cpp)
add_executable(L4_Q8 Lista04-big-oh/H-Virus/Q8.cpp)
add_executable(L4_Q9 Lista04-big-oh/I-MeiaVida/Q9.cpp)
add_executable(L4_Q10 Lista04-big-oh/J-RepeticaoArray/Q10.cpp)

# --- LISTA 08 ---
add_executable(L8_Q1 Lista08-VetorDinamico/A-LerNumeros/Q1.cpp)
add_executable(L8_Q2 Lista08-VetorDinamico/B-RetonarValorDeIndice/Q2.cpp)
add_executable(L8_Q3 Lista08-VetorDinamico/C-RemoverValorDoVetor/Q3.cpp)
add_executable(L8_Q4 Lista08-VetorDinamico/D-TamanhoLogico/Q4.cpp)
add_executable(L8_Q5 Lista08-VetorDinamico/E-CompararNumeros/Q5.cpp)
add_executable(L8_Q6 Lista08-VetorDinamico/F-AdicionarVetor/Q6.cpp)

# --- LISTA 09 ---

add_executable(L9_Q1 Lista09-ListaLigada/A-VetorLigado/Q1.cpp)
add_executable(L9_Q2 Lista09-ListaLigada/B-InsertAfter/Q2.cpp)
