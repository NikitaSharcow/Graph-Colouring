#include "Data.h"

using namespace std;

class Solver: public Data{
    bool col_res_is_empty();
    void colourize(int it);
public:
    Solver(ifstream &f_in);
};
