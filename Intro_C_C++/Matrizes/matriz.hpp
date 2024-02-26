// tentando usar oop com matrizes
#ifndef MATRIZ_HPP
#define MATRIZ_HPP
#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

class Matriz{
    private:
    
        int m_linhas;
        int m_colunas;
        vector <vector<int>> m_matriz; //local da memoria q vai receber os valores, no construtor incializa com zeros
    
    public:
        Matriz(int linhas, int colunas) : m_linhas(linhas), m_colunas(colunas), m_matriz(linhas, vector <int>(colunas, 0)){}
        
        void exibir();
        void montarMatriz();
        static Matriz dotProd(Matriz &matrizA, Matriz &matrizB);
};

#endif