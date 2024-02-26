#include "matriz.hpp"

int main(){
    Matriz minhaMatrizA(2,3);
    Matriz minhaMatrizB(3,4);

    minhaMatrizA.montarMatriz();
    minhaMatrizA.exibir();
    cout << endl;

    minhaMatrizB.montarMatriz();
    minhaMatrizB.exibir();
    cout << endl;

    Matriz matrizC(2,4);
    matrizC.dotProd(minhaMatrizA, minhaMatrizB);
    matrizC.exibir();

    //essa nova branch tem modificações
    return 0;
}