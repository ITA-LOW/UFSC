#ifndef SWAP
#define SWAP

void swap(int* a, int* b){
    //implemente aqui
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

#endif