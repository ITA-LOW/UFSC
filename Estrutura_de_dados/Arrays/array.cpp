#include <iostream>
#include <time.h>

using namespace std;

int main(int argc, char ** argv){
    /* int minhaArray[10] = {1,2,3,4,5,6,7,8,9,10};
    for(int i = 0; i < 10; i++){
        cout << minhaArray[i] << " ";
    }
    cout << endl;
    */

    /* char minhaArray[10] = {"italo"}; // o tamanho da array deve ser o tamanho da string + 1.
    for(int i = 0; i < 10; i++){
        cout << minhaArray[i] << " ";
    }
    cout << endl; */

    /* string minhaArray[10] = {"italo"}; // o tamanho da array deve ser o tamanho da string + 1.
    for(int i = 0; i < 10; i++){
        cout << minhaArray[i] << " ";
    }
    cout << endl<< sizeof(minhaArray) << endl; */
    

    //#######################################################
    /* size_t linhas = atoi(argv[1]);
    size_t colunas = atoi(argv[2]);

    srand(time(NULL));
    
    size_t ** minhaArrayA = new size_t * [linhas];
    for(int i = 0; i < linhas; i++){
        minhaArrayA[i] = new size_t[colunas];
    }

    size_t ** minhaArrayB = new size_t * [colunas];
    for(int i = 0; i < colunas; i++){
        minhaArrayB[i] = new size_t[linhas];
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            minhaArrayA[i][j] = rand() % 9;
        }
    }

    for(int i = 0; i < colunas; i++){
        for(int j = 0; j < linhas; j++){
            minhaArrayB[i][j] = rand() % 9;
        }
    }


    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << minhaArrayA[i][j]<< " ";
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 0; i < colunas; i++){
        for(int j = 0; j < linhas; j++){
            cout << minhaArrayB[i][j] << " ";
        }
        cout << endl;
    }

    cout  << endl;

    size_t ** minhaArrayC = new size_t * [linhas];
    for(int i = 0; i < linhas; i++){
        minhaArrayC[i] = new size_t[linhas];
    }

    for(int i = 0; i < linhas; i++){
        size_t sum = 0;
        for(int j = 0; j < linhas; j++){
            for(int k = 0; k < colunas; k++){
                sum += minhaArrayA[i][k]*minhaArrayB[k][j];
            }
            minhaArrayC[i][j] = sum;
        }   
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < linhas; j++){
            cout << minhaArrayC[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < linhas; i++){
        delete[] minhaArrayA[i];
    }
    for(int i = 0; i < linhas; i++){
        delete[] minhaArrayB[i];
    }
    for(int i = 0; i < linhas; i++){
        delete[] minhaArrayC[i];
    }

    delete[] minhaArrayA;
    delete[] minhaArrayB;
    delete[] minhaArrayC; */

    // esse programa esta vazando memoria
    //#######################################################



    return 0;


}