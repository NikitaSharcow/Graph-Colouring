#include "Solver.h"

bool Solver:: col_res_is_empty(){
    for (int i=0; i<V; i++){
        if (col_res[i]==0) return true;
    }
    return false;
};

void Solver:: colourize(int it){
    set<int> assigned;
    int colour=1;
    bool flag=true;
    for (list<int>:: iterator j=adj_list[it].begin(); j!=adj_list[it].end(); j++) if (col_res[*j]) assigned.insert(col_res[*j]);
    colour = 1; flag = true;
    for (set<int>:: iterator s=assigned.begin(); s!=assigned.end() && flag; s++){
        if (colour!=*s) flag=false;
        else{
            flag=true;
            colour++;
        }
    }
    col_res[it] = colour;
}

Solver:: Solver(ifstream &f_in): Data(f_in){
    int u=degree[0].second, i=1;
    col_res[u] = 1;
    while (col_res_is_empty()){
        if (!col_res[u]) colourize(u);
        list lst = adj_list[u];
        for (list<int>:: iterator it=lst.begin(); it!=lst.end(); it++) if (!col_res[*it]) colourize(*it);
        u = degree[i++].second;
        //cout << u << ": ";
        //for (int t=0; t<V; t++) cout << col_res[t] << " ";
        //cout << endl;
    }
    for (i=0; i<V; i++) cout << col_res[i] << " ";
    cout << endl;
}
 
