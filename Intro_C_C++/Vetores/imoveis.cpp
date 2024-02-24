#include <iostream>
#include <vector>

using namespace std;

/* 
    Exercício: Suponha usar um vetor para acompanhar o valor de imóveis
    1 - Que tipo de dados usar para valor de imóveis?
        Float, int, double, usigned?
    2 - Quantos imóveis o programa vai gerenciar?
        - usar tamanho fixo de vetor?
        - usar tamanho variável?
    3 - Que operações (funções) serão feitas sobre os imóveis?
        - ler o valor de cada imovel : preencher vetor;
        - mostrar o valor atual de cada imovel : mostrar vetor;
        - reavaliar o valor dor imoveis : modificar vetor;
 */

// # Preencher vetor
void lerVetor(vector<double> &meuVetor){
    double temp; //le um valor de imovel digitada pelo usuario
    int i = 1; // guarda na posição lida (i é o indice)
    cout << "Digite valor #1: ";
    while(cin >> temp && temp >0){ // temp é um double, caso seja digitado uma palavra qualquer o programa sai
        meuVetor.push_back(temp); //coloca o valor de temp na posição atual (0) e depois incrementa i
        i++;
        cout << "Digite o valor #" << i <<": "; //nesse momento ja incrementou 1 entao sera 2
    }

    if(cin.fail()){ //estado de erro: ao sair do while por erro no cin deve-se pegar o ultimo lançamento e sumir com ele
        cin.clear();
        while(cin.get() != '\n') // enquanto o programa não pegar um numero, continua limpando o buffer
            continue; //continua pois não há nada pra fazer no laço while
        cout << "Saindo do programa!\n";
    }
}

// # Mostrar vetor
// Como a função trabalha com valores originais do vetor é interessante usar const
void mostrarVetor(const vector<double> &meuVetor){
    int it = 0;
    for(int i : meuVetor){
        cout << "Imóvel #" << it + 1 << " R$" << i;
        it++;
        cout <<"\n";
    }
}

int main(){
    char op;
    vector<double> vetorzao;

    while(op != '0'){
        cout << "Digite a função: (1)-lerVetor, (2)- mostraVetor: "<<endl;
        cin >> op;
        if(op == '1'){
            lerVetor(vetorzao);
        }

        if(op == '2'){
            mostrarVetor(vetorzao);
        }
    }

    return 0;
}