#include "matriz.hpp"

void Matriz::exibir(){
    for(int i = 0; i < m_linhas; i++){
        for(int j = 0; j < m_colunas; j++){
            cout << m_matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void Matriz::montarMatriz(){
    srand(time(nullptr));
    for(int i = 0; i < m_linhas; i++){
        for(int j = 0; j < m_colunas; j++){
            m_matriz[i][j] = rand() % 9;
        }
    }
}

void Matriz::dotProd(Matriz &matrizA, Matriz &matrizB, Matriz matrizC){
    
    for(int i = 0; i < matrizA.m_linhas; i++){
        for(int j = 0; j < matrizB.m_colunas; j++){
            int sum = 0;
            for(int k = 0; k < matrizA.m_colunas; k++){
                sum += matrizA.m_matriz[i][k]*matrizB.m_matriz[k][j];
            }
            matrizC.m_matriz[i][j] = sum;
        }
    }
}



