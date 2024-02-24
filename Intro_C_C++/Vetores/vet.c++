#include <iostream>
#include <vector>

using namespace std;

int somaVec(vector<int> meuVetor, int n){
    int sum = 0;
    for(int i : meuVetor){
        sum += i;
    }
    return sum;
}

int main(){
    int vec[2] = {1,2}; // alocação estática e raiz
    vector<int> vec2 = {1,2,3,4}; //alocação estática e nutella
    /* for(int i : vec2){
        cout << i << " ";
    }
    cout <<endl; */

    vector<int> vec3;
    /* int tamanho = sizeof(vec3);
    cout << "vec3 tem: " << tamanho << " bytes" << endl; */
    vec3 = {1,2,3,4,5,6,7};
    //cout << "vec3 tem: " << sizeof(vec)<< " bytes" << endl;

    int sumVec = somaVec(vec3, 7);
    cout <<  "soma: "<< sumVec << endl;

    
    return 0;
}