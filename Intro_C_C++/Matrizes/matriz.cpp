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

Matriz Matriz::dotProd(Matriz &matrizA, Matriz &matrizB){
    
    Matriz resultante(matrizA.m_linhas, matrizB.m_colunas);

    for(int i = 0; i < matrizA.m_linhas; i++){
        for(int j = 0; j < matrizB.m_colunas; j++){
            int sum = 0;
            for(int k = 0; k < matrizA.m_colunas; k++){
                sum += matrizA.m_matriz[i][k]*matrizB.m_matriz[k][j];
            }
            resultante.m_matriz[i][j]=sum;
        }
    }
    return resultante;
}

Matriz Matriz::sum(Matriz &matrizA, Matriz &matrizB){
    
    Matriz resultante(matrizA.m_linhas, matrizB.m_colunas);

    for(int i = 0; i < matrizA.m_linhas; i++){
        for(int j = 0; j < matrizA.m_colunas; j++){
            int sum = 0;
            sum = matrizA.m_matriz[i][j] + matrizB.m_matriz[i][j];
            resultante.m_matriz[i][j] = sum;
        }
    }
    return resultante;
}


