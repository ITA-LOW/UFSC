#include "MatrizAbstrata.h"

class MinhaMatriz : public MatrizAbstrata 
{
    public :
        MinhaMatriz(int n, int m, int** array) : MatrizAbstrata{n, m, array} {};
        
        virtual MatrizAbstrata* transpor() const {
           //implementar
        };
};