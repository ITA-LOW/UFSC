#ifndef SWAP
#define SWAP

//A função swap deve receber dois ponteiros para um template T. Faça os ajustes necessários


template<typename T>
void swap(T* a, T* b){
    //implemente aqui
    T aux = *a;
    *a = *b;
    *b = aux;
}

#endif