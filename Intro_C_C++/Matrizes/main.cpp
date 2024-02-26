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

    /* Matriz matrizC(2,4); tambem pode ser feito de outra maneira
    matrizC.dotProd(minhaMatrizA, minhaMatrizB); */
    Matriz matrizC = Matriz::dotProd(minhaMatrizA, minhaMatrizB);
    matrizC.exibir();

    return 0;
}