#include <iostream>

using namespace std;

int main(){
    int var1 = 5; // crio qualquer variavel
    int * pointer_var1; // crio qualquer ponteiro
    pointer_var1 = &var1; // guardo o valor da variavel no ponteiro criado

    /* cout << "valor de pointer_var1: " << pointer_var1 << endl;
    cout << "valor de var1: " << var1 << endl;
    cout << "valor armazenado no pointer_var1: "<< * pointer_var1 << endl;
 */

    int * point2 = new int; // esse ponteiro aponta pra inteiro mas não cria uma variável, ou seja, 
                            // o int que for guardado aqui não será possível de ser acessado de nenhuma 
                            // outra forma a não ser pelo ponteiro. Não é possível acessar com &
    
    
    return 0;
}