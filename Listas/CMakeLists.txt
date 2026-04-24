cmake_minimum_required(VERSION 4.2)
project(Listas)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lista01
        Lista01/A-SomaSimples/Q1.cpp
        Lista01/B-PerimetroRetangulo/Q2.cpp
        Lista01/C-AreaCirculo/Q3.cpp
        Lista01/D-DistanciaPostes/Q4.cpp
        )

add_executable(Lista04
        Lista04-big-oh/C-MaiorDiferenca/Q3.cpp
        Lista04-big-oh/D-MaiorContigua/Q4.cpp
        Lista04-big-oh/H-Virus/Q8.cpp
        Lista04-big-oh/I-MeiaVida/Q9.cpp
        Lista04-big-oh/J-RepeticaoArray/Q10.cpp
)
