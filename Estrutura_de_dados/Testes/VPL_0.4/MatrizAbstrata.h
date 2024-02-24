#include <string>

class MatrizAbstrata
{
protected:
    int _n{};
    int _m{};
    int **_array{nullptr};

public:
    MatrizAbstrata(int n = 0, int m = 0, int **array = nullptr){
        //implementar
    };
    
    virtual ~MatrizAbstrata(){
        //implementar
    }
    
    virtual MatrizAbstrata *transpor() const = 0;

    bool operator==(const MatrizAbstrata &other)
    {
        if (this->_n != other._n || this->_m != other._m)
            return false;

        for (int i = 0; i < this->_n; i++)
            for (int j = 0; j < this->_m; j++)
                if (this->_array[i][j] != other._array[i][j])
                    return false;

        return true;
    }

    std::string toString()
    {
        std::string ret{"["};

        for (int i = 0; i < this->_n; i++)
        {
            ret.append(" [");
            for (int j = 0; j < this->_m; j++)
            {
                ret.append(std::string(" ") + std::to_string(this->_array[i][j]));
            }
            ret.append(" ]");
        }
        ret.append(" ]");

        return ret;
    }
};