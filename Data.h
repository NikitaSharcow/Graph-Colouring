#include "Parcer.h"

using namespace std;

typedef pair<int,int> vertex_degree; //first - degree, second - vertex

class Data: public Parcer{
protected:
    vector<int> col_res;
    vector<vertex_degree> degree;
    vector<list<int>> adj_list;
public:
    Data(ifstream &f_in);
};
