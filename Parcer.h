#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <list>
#include <set>
#include <algorithm>

using namespace std;

typedef pair<int,int> edge;

class Parcer{
protected:
    int V, E;
    vector<edge> edges;
public:
    Parcer(ifstream &f_in);
};
