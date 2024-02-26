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

    Matriz matrizC = Matriz::dotProd(minhaMatrizA, minhaMatrizB);
    matrizC.exibir();

    //testando o modo 1 de fazer, esse teste tbm eh para subir em nova branch

    return 0;
}