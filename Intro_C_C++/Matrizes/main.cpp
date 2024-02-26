#include "matriz.hpp"

int main(){
    Matriz minhaMatrizA(2,2);
    Matriz minhaMatrizB(2,2);

    minhaMatrizA.montarMatriz();
    minhaMatrizA.exibir();
    cout << endl;

    minhaMatrizB.montarMatriz();
    minhaMatrizB.exibir();
    cout << endl;

    Matriz matrizC = Matriz::dotProd(minhaMatrizA, minhaMatrizB);
    matrizC.exibir();
    cout << endl;

    Matriz matrizD = Matriz::sum(minhaMatrizA, minhaMatrizB);
    matrizD.exibir();


    //testando o modo 1 de fazer, esse teste tbm eh para subir em nova branch

    return 0;
}