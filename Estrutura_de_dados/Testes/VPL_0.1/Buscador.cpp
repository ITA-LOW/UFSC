#include "Buscador.h"

int Buscador::buscar(const char* string, int len, const char* c){
    //implemente aqui
    for(int i = 0; i < len; i++){
        if(string[i] == *c){
            return true;
        }
    }
    return -1;

};
